/*
 * @Author: your name
 * @Date: 2020-07-19 22:24:46
 * @LastEditTime: 2020-07-20 21:37:34
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \20200119-1\Vec.h
 */

#ifndef VEC_H
#define VEC_H

#include <algorithm>
#include <memory>
#include <utility>

#ifdef INITIALIZER_LIST
#include <initializer_list>
#endif

//siplified-implementation of memory allocation strategy for a vector-like

template <typename T>
class Vec
{
public:
#if defined(IN_CLASS_INITS) && defined(DEFAULT_FCNS)
    Vec() = default;
#else
    Vec() : elements(nullptr), first_free(nullptr), cap(nullptr)
    {
    }
#endif
    Vec(const Vec &);
    Vec &operator=(const Vec &);
#ifdef NOEXCEPT
    Vec(Vec &&) noexcept;
    Vec &operator=(Vec &&) noexcept;
    ~Vec() noexcept;
#else
    Vec(Vec &&) throw();
    Vec &operator=(Vec &&) throw();
    ~Vec() throw();
#endif

#ifdef INITIALIZER_LIST
    Vec &operator=(std::initilizer_list<T>);
#endif

    void push_back(const T &);
    void push_back(T &&);
#ifdef VARIADICS
    template <class... Args>
    void emplace_back(Args &&...);
#endif

    size_t size() const
    {
        return first_free - elements;
    }
    size_t capacity() const { return cap - elements; }

    T &operator[](size_t n) { return elements[n]; }
    const T &operator[](size_t n) const { return elements[n]; }

    T *begin() const { return elements; }
    T *end() const { return first_free; }

private:
    static std::allocator<T> alloc; //allocates the elements
    //used by functions that add elements to Vec
    void chk_n_alloc()
    {
        if (first_free == cap)
            reallocate();
    }

    //utilities used by copy constructor,assignment operator,and destructor
    std::pair<T *, T *>
    alloc_n_copy(const T *, const T *);
    void free();
    void reallocate();
    void reallocate(); //get more space and copy existing elements

#ifdef IN_CLASS_INITS
    T *elements = nullptr;   //pointer to first elements in the array
    T *first_free = nullptr; //
    T *cap = nullptr;

#else
    T *elements = nullptr;   //pointer to first elements in the array
    T *first_free = nullptr; //
    T *cap = nullptr;
#endif
};

//defination for the static data member
template <typename T>
std::allocator<T> Vec<T>::alloc;

template <typename T>
inline
#ifdef NOEXCEPT
    Vec<T>::~Vec() noexcept
{
    free();
}
#else
    Vec<T>::~Vec() throw()
{
    free();
}
#endif
template <typename T>
inline std::pair<T *, T *>
Vec<T>::alloc_n_copy(const T *b, const T *e)
{
    auto data = alloc.allocate(e - b); //分配e-b个空间大小
#ifdef LIST_INIT
    return {data, std::uninitialized_copy(b, e, data)};
#else
    return std::make_pair(data, std::uninitialized_copy(b, e, data));
#endif
}

template <typename T>
inline
#ifdef NOEXCEPT
    Vec<T>::(Vec &&s) noexcept :
#else
    Vec<T>::Vec(Vec &&s) throw() :
#endif
                                 elements(s.elements), first_free(s.first_free), cap(s.cap)
{
    //leave s in a state in which it is safe to run the destructor
    s.elements = s.first_free = s.cap = nullptr;
}

template <typename T>
inline void Vec<T>::Vec(const Vec &s)
{
    auto newdata = alloc_n_copy(s.begin(), s.end());
    elements = newdata.first;
    first_free = cap = newdata.second;
}

template <typename T>
inline void Vec<T>::free()
{
    //destroy the old elements in reverse order
    for (auto p = first_free; p != elements; /**/)
        alloc.destroy(--p);
    if (elements)
        alloc.deallocate(elements, cap - elements);
}

#ifdef INITIALIZER_LIST
template <typename T>
inline Vec<T> &Vec<T>::operator=(std::initializer_list<T> il)
{
    auto data = alloc_n_copy(il.begin(), il.end()); //赋予临时量
    free();                                         //将右边对象释放
    elements = data.first;
    first_free = cap = data.second;
    return *this;
}

template <typename T>
inline
#ifdef NOEXCEPT
    Vec<T> &
    Vec<T>::operator=(Vec &&rhs) noexcept
#else
    Vec<T> &
    Vec<T>::operator=(Vec &&rhs) throw()
#endif
{
    //探测自赋值状况
    if (this != &rhs)
        free();
    elements = rhs.elements;
    first_free = rhs.first_free;
    cap = rhs.cap;
    //leave rhs in a destrctible state
    rhe.elements = rhs.first_free = rhs.cap = nullptr;
    return *this;
}

template <typename T>
inline Vec<T> &Vec<T>::operator=(const T &rhs)
{
    auto data = alloc_n_copy(rhs.begin(), rhs.end());
    free();
    elements = data.first;
    first_free = cap = data.second;
    return *this;
}

template <typename T>
inline void Vec<T>::reallocate()
{
    //
    auto newcapacity = size() ? 2 * size() : 2;

    auto first = alloc.allocate(newcapacity);
    auto dest = first;
    auto elem = elements;

    //move the elements
    for (size_t i = 0; i != size(); ++i)
        alloc.construct(dest++, std::move(*elem++)); //利用move函数减少拷贝
    free();

    elements = first;
    first_free = dest;
    cap = elements + newcapacity;
}

template <typename T>
inline void Vec<T>::push_back(T &&s)
{
    chk_n_alloc(); //检查是否需要赋予空间
    alloc.construct(first_free++, std
                    : move(s));
}

template <typename T>
inline void Vec<T>::push_back(const T &s)
{
    chk_n_copy();
    alloc.construct(first_free++, s);
}

#ifdef VARIADICS //可变参数模板，不太懂
template <typename T>
template <class... Args>
inline void Vec<T>::emplace_back(Args &&... args)
{
    chk_n_copy();
    alloc.construct(first_free++, std::forward<Args>(args)...);
}
#endif
