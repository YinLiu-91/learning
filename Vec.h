/*
 * @Author: your name
 * @Date: 2020-07-19 22:24:46
 * @LastEditTime: 2020-07-19 23:53:01
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
#endif
