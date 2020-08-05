/*
 * @Author: your name
 * @Date: 2020-07-17 21:24:23
 * @LastEditTime: 2020-07-30 20:33:53
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \20200119-1\Blob.h
 */
#ifndef BLOB_H
#define BLOB_H

#include <iterator>
#include <string>
#include <vector>

#ifdef INITIAL_LIST
#include <initializer_list>
#endif

#include <cstddef>
#include <stdexcept>
#include <utility>
#include <memory>
#include <algorithm>
#include <iostream>
#include <cstdlib>

//forward declaritions needed for friend declarition in Blob
template <typename>
class BlobPtr;
template <typename>
class Blob; //needed for parameters in operator==
template <typename T>
bool operator==(const Blob<T> &, const Blob<T> &);

template <typename T>
class Blob
{
    friend class BlobPtr<T>;
    friend bool operator==<T>(const Blob<T> &, const Blob<T> &);

public:
    typedef T value_type;
    typedef typename std::vector<T>::size_type size_type;

    //构造函数
    Blob();
#ifdef INITIAL_LIST
    Blob(std::initializer_list<T> il);
//if no initializer_list suppotr use the iterator constructor
#endif

    template <typename It>
    Blob(It b, It e);
    Blob(T *, std::size_t);

    //return BlobPtr to  the first and one past the last elements
    BlobPtr<T> begin() { return BlobPtr<T>(*this); }
    BlobPtr<T> end()
    {
        auto ret = BlobPtr<T>(*this, data->size());
        return ret;
    }
    //number of  elements in the Blob
    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }

    ///add and remove elements
    void push_back(const T &t) { data->push_back(t); }
    void push_back(const T &&t) { data->push_back(std::move(t)); }
    void pop_back();

    //element access
    T &front();
    T &back();
    T &at(size_type);
    const T &back() const;
    const T &front() const;
    const T &at(size_type) const;
    T &operator[](size_type i);
    const T &operator[](size_type i) const;

    void swap(Blob &b) { data.swap(b.data); }

private:
    std::shared_ptr<std::vector<T>> data;
    void check(size_type i, const std::string &msg) const;
};

//constructors
//这个构造函数功能与利用迭代器的类似
template <typename T>
Blob<T>::Blob(T *p, std::size_t n) : data(std::make_shared<std::vector<T>>(p, p + n)) {}

template <typename T>
Blob<T>::Blob() : data(std::make_shared<std::vector<T>>()) {}
template <typename T>
template <typename It>
Blob<T>::Blob(It b, It e) : data(std::make_shared<std::vector<T>>(b, e)) {}

#ifdef INITIALIZER_LIST
template <typename T>
Blob<T>::Blob(std::initializer_list<T> il)
    : data(std::make_shared<std::vector<T>>(il))
{
}
#endif

//check member
template <typename T>
void Blob<T>::check(size_type i, const std::string &msg) const
{
    if (i >= data->size())
        throw std ::out_of_range(msg);
}

//element access members
template <typename T>
T &Blob<T>::front()
{
    //if the vector is empty,check will throw
    check(0, "front on empty Blob");
    return data->front();
}

template <typename T>
T &Blob<T>::back()
{
    //if the vector is empty,check will throw
    check(0, "back on empty Blob");
    return data->back();
}

template <typename T>
void Blob<T>::pop_back()
{
    //if the vector is empty,check will throw
    check(0, "back on empty Blob");
    return data->pop_back();
}

template <typename T>
const T &Blob<T>::front() const
{
    //if the vector is empty,check will throw
    check(0, "front on empty Blob");
    return data->front();
}

template <typename T>
const T &Blob<T>::back() const
{
    //if the vector is empty,check will throw
    check(0, "back on empty Blob");
    return data->back();
}

template <typename T>
T &Blob<T>::at(size_type i)
{
    check(i, "subscript out of range");
    return (*data)[i];
}

template <typename T>
const T &Blob<T>::at(size_type i) const
{
    check(i, "subscript out of range");
    return (*data)[i];
}

template <typename T>
T &Blob<T>::operator[](size_type i)
{
    check(i, "subscript out of range"); //下标运算符不应该像at一样检查！
    return (*data)[i];
}

template <typename T>
const T &Blob<T>::operator[](size_type i) const
{
    check(i, "subscript out of range"); //下标运算符不应该像at一样检查！
    return (*data)[i];
}

//运算符
template <typename T>
std::ostream &
operator<<(std::ostream &os, const Blob<T> a)
{
    os << "<";
    for (size_t i = 0; i != a.size(); ++i)
        os << a[i] << " ";
    os << ">";
    return os;
}

//blobptr throw an exception on attempts to access a nonecitent element
template <typename T>
bool operator==(const BlobPtr<T> &, const BlobPtr<T> &);
template <typename T>
class BlobPtr : public std::iterator<std::bidirectional_iterator_tag, T>
{
    friend bool
    operator==<T>(const BlobPtr<T> &, const BlobPtr<T> &);

public:
    BlobPtr() : curr(0) {}
    BlobPtr(Blob<T> &a, size_t sz = 0) : wptr(a.data), curr(sz) {}
    T &operator[](std::size_t i)
    {
        auto p = check(i, "subscript out of range");
        return (*p)[i];
    }

    const T &operator[](std::size_t i) const
    {
        auto p = check(i, "subscript out of range");
        return (*p)[i];
    }
    T &operator*() const
    {
        auto p = check(curr, "dereference past end");
        return (*p)[curr];
    }

    T *operator->() const
    {
        return &this->operator*();
    }

    BlobPtr &operator++(); //前置
    BlobPtr &operator--();

    BlobPtr operator++(int); //后置
    BlobPtr operator--(int);

private:
    //check returns a shared_ptr to the vector if the check succeeds
    std::shared_ptr<std::vector<T>>
    check(std::size_t, const std::string &) const;

    //store a weak_ptr ,which means the underlying vector might be destroyed
    std::weak_ptr<std::vector<T>> wptr;
    std::size_t curr; //current position within the array
};

//t
template <typename T>
bool operator==(const BlobPtr<T> &lhs, const BlobPtr<T> &rhs)
{
    return lhs.wptr.lock().get() == rhs.wptr.lock().get() && lhs.curr == rhs.curr;
}
template <typename T>
bool operator!=(const BlobPtr<T> &lhs, const BlobPtr<T> &rhs)
{
    return !(rhs == lhs);
}

template <typename T>
std::shared_ptr<std::vector<T>>
BlobPtr<T>::check(std::size_t i, const std ::string &msg) const
{
    auto ret = wptr.lock(); //is  the vector still around ?
    if (!ret)
        throw std::runtime_error("unbound BlobPtr");
    if (i >= ret->size())
        throw std::out_of_range(msg);
    return ret;
}
///
template <typename T>
BlobPtr<T> BlobPtr<T>::operator++(int)
{
    BlobPtr ret = *this; //先取出值，载调用前置递增
    ++*this;
    return ret;
}

template <typename T>
BlobPtr<T> BlobPtr<T>::operator--(int)
{
    BlobPtr ret = *this;
    --*this;
    return ret;
}

template <typename T>
BlobPtr<T> &BlobPtr<T>::operator++()
{
    check(curr, "increment past end of BlobPtr");
    ++curr;
    return *this;
}
template<typename T>
BlobPtr<T>&BlobPtr<T>::operator--()

{
    --curr;//先递减，再检查
    //check(-1,"decrement past begin of BlobPtr");//不应该是curr?是否修改成如下形式?
    check(curr,"decrement past begin of BlobPtr");

    return *this;
}

#endif
