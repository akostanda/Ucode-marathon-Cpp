#pragma once

#include <iostream>
// #include<string>
#include <algorithm>
#include <memory>

namespace CBL {

template <class T>
// using T = int;
class Vector {
public:
    using iterator = T*;
    Vector() = default;

    explicit Vector(size_t size) : m_size(size), m_capacity(size) {
        try {
            m_buffer = new T[size];
        }
        catch (...) {
            std::cerr << "Error\n";
            exit(1);
        }
    }
    Vector(size_t size, const T& value) : Vector(size) {
        for (auto& v : *this)
            v = value;
    }

    Vector(iterator first, iterator last) : Vector(last - first) {
        std::copy(first, last, m_buffer);
    }
    Vector(const std::initializer_list<T>& lst) : Vector(lst.size()) {
        std::copy(lst.begin(), lst.end(), m_buffer);
    }
    Vector(const Vector<T>& other) : Vector(other.size()) {
        for (size_t i = 0; i < other.size(); i++) {
            m_buffer[i] = other[i];
        }
        // std::copy(other.begin(), other.end(), m_buffer);
    }
    ~Vector() {
        delete[] m_buffer;
    }

    Vector<T>& operator=(const Vector<T>& other) {
        if (other.m_size <= m_capacity) {
            std::copy(other.begin(), other.end(), this->begin());
            m_size = other.m_size;
        }
        else {
            Vector<T> buf(other);
            std::swap(buf.m_buffer, m_buffer);
            std::swap(buf.m_size, m_size);
            std::swap(buf.m_capacity, m_capacity);
        }
        return *this;
    }
    bool operator==(const Vector<T>& other) const {
        if (size() != other.size())
            return false;
        return std::equal(begin(), end(), other.begin());
    }
    bool operator!=(const Vector<T>& other) const {
        return !(*this == other);
    }
    bool operator<(const Vector<T>& other) const {
        return std::lexicographical_compare(begin(), end(), other.begin(), other.end());

    }
    bool operator>(const Vector<T>& other) const {
        size_t i = 0;
        while (m_buffer[i] == other[i] && i < m_size && i < other.m_size)
            i++;
        return m_buffer[i] > other[i];
    }
    bool operator<=(const Vector<T>& other) const {
        size_t i = 0;
        while (m_buffer[i] == other[i] && i < m_size && i < other.m_size)
            i++;
        return m_buffer[i] <= other[i];
        
    }
    bool operator>=(const Vector<T>& other) const {
        return !(*this < other);
    }

    // iterators
    iterator begin() const {
        return m_buffer;
    }
    iterator end() const {
        return m_buffer + m_size;
    }

    // capacity
    size_t size() const {
        return m_size;
    }
    size_t capacity() const {
        return m_capacity;
    }
    bool isEmpty() const {
        return m_size == 0;
    }
    void resize(size_t size, const T& value = T()) {
        Vector<T> *buf = new Vector(size);
        for (size_t i = 0; i < size; i++) {
            if (i < m_size)
                buf[i] = m_buffer[i];
            else
                buf[i] = value;
        }
        delete[] m_buffer;
        this = buf;
    }
    void reserve(size_t size) {
        if (m_capacity < (m_size + size)) {
            Vector<T> *buf = new Vector(size + m_size);
            for (size_t i = 0; i < m_size; i++)
                    buf[i] = m_buffer[i];
            delete[] m_buffer;
            this = buf;
        }
        else
            m_size += size;
    }

    // element access
    T& operator[](size_t index) const {
        return m_buffer[index];
    }
    T& at(size_t index) const {
        if (index < m_size)
            return m_buffer[index];
        else
            throw std::out_of_range("Error");
    }
    T* data() const {
        return m_buffer;
    }

    // modifiers
    void push_back(const T& value) {
        if (m_size < m_capacity) {
            m_size++;
            m_buffer[m_size - 1] = value;
        }
        else {
            m_size++;
            m_capacity = m_size * 2;
            auto buf = new T[m_capacity];
            for (size_t i = 0; i < m_size - 1; i++) {
                buf[i] = m_buffer[i];
            }
            buf[m_size - 1] = value;
            delete[] m_buffer;
            m_buffer = buf;
        }
    }
    void pop_back() {
        if (m_size != 0)
            m_size--;
    }
    iterator insert(iterator pos, const T& value) {
        auto it = this->end() - 1;
        if (m_size < m_capacity) {
            if (pos == this->end()) {
                m_size++;
                *pos = value;
                return pos;
            }
            m_size++;
        }
        else {
            T* buf = new T[m_size * 2];
            m_size++;
            for (size_t i = 0; i < m_size; i++) {
                buf[i] = m_buffer[i];
                if (pos == &m_buffer[i])
                    pos = &buf[i];
            }
            delete[] m_buffer;
            m_buffer = buf;
            m_capacity *= 2;
            it = this->end() - 1;
        }
        for (; it != pos; it--)
            *it = *(it - 1);
                *it = value;
        return it;
    }
    iterator erase(iterator pos) {
        for (auto it = pos; it != this->end() - 2; it++)
            *it = *(it + 1);
        m_size--;
        return pos;
    }
    iterator erase(iterator first, iterator last) {
        size_t size = m_size - (last - first);
        if (size == 0) {
            m_size = size;
            return nullptr;
        }
        T* buf = new T[size];
        auto it = m_buffer;
        auto it2 = buf;
        size_t i = 0;
        for (; it != first; it++, i++) {
            *it2 = *it;
            it2++;
        }
        it = last;
        for (; i < m_size; i++, it++)
            buf[i] = *it;
        m_size = size;
        delete[] m_buffer;
        m_buffer = buf;
        return it2;
    }
    void clear() {
        m_size = 0;
    }

private:
    size_t m_size{0};
    size_t m_capacity{0};
    T *m_buffer{nullptr};
};

} // end namespace CBL
