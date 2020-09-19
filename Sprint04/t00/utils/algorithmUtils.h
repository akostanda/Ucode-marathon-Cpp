#pragma once

#include<utility>
#include<algorithm>
#include<iostream>//

template <typename T>
bool IsInRange(const T& val, const T& from, const T& to) {
    if (val >= from && val <= to)
        return true;
    return false;
}

template <typename T>
bool IsInRange(const T& val, const std::pair<const T&, const T&>& minmax) {
    if (val >= minmax.first && val <= minmax.second)
        return true;
    return false;
}

template <typename T>
bool IsInsideRange(const T& val, const T& from, const T& to) {
    if (val > from && val < to)
        return true;
    return false;
}

template <typename T>
bool IsInsideRange(const T& val, const std::pair<const T&, const T&>& minmax) {
    if (val > minmax.first && val < minmax.second)
        return true;
    return false;
}

template <class T, class U = T>
bool Modify(T& obj, U&& new_value) {
    if (obj == new_value)
        return false;
    obj = new_value;
    return true;
}

template <class Collection, class T>
void RemoveAll(Collection& c, const T& value) {
    c = {c.begin(), std::remove(c.begin(), c.end(), value)};
}

template <class Collection, class Pred>
void RemoveAllIf(Collection& c, Pred&& predicate) {
    c = {c.begin(), std::remove_if(c.begin(), c.end(), predicate)};
}

template <class Collection, class T>
auto Find(Collection& c, const T& value) {
    typename Collection::iterator it = c.begin();
    while (it != c.end()) {
        if (*it == value) {
            return it;
        }
        it++;
    }
    return c.end();
}

template <class Collection, class Pred>
auto FindIf(Collection& c, Pred&& predicate) {
    typename Collection::iterator it = c.begin();
    while (it != c.end()) {
        if (predicate(*it))
            return it;
        it++;
    }
    return c.end();
}

template <class Collection, class T>
bool Contains(const Collection& c, const T& value) {
    for (auto& it : c) {
        if (it == value)
            return true;
    }
    return false;
}

template <class Collection, class Pred>
bool Contains(const Collection& c, Pred&& predicate) {
    for (auto& it : c) {
        if (predicate(it))
            return true;
    }
    return false;
}

template <class T>
const auto& Min(const T& arg) {
    return arg;
}

template <class T, class... Args>
const auto& Min(const T& arg, const Args&... args) {
    if (arg < Min(args...))
        return arg;
    else
        return Min(args...);
}

template <class T>
const auto& Max(const T& arg) {
    return arg;
}

template <class T, class... Args>
const auto& Max(const T& arg, const Args&... args) {
    if (arg > Max(args...))
        return arg;
    else
        return Max(args...);
}

template <class Collection>
auto MaxElement(const Collection& c) {
    auto result = *(c.begin());
    for (auto& it : c) {
        if (it > result)
            result = it;
    }
    return result;
}

template <class Collection>
auto MinElement(const Collection& c) {
    auto result = *(c.begin());
    for (auto& it : c) {
        if (it < result)
            result = it;
    }
    return result;
}

template <class Collection, class Comp>
auto MaxElement(const Collection& c, Comp&& comparator) {
    auto result = *(c.begin());
    for (auto& it : c) {
        if (comparator(result, it))
            result = it;
    }
    return result;
}

template <class Collection, class Comp>
auto MinElement(const Collection& c, Comp&& comparator) {
    auto result = *(c.begin());
    for (auto& it : c) {
        if (comparator(it, result))
            result = it;
    }
    return result;
}

template <class Collection>
void Sort(Collection& c) {
    for (auto it = c.begin(); it != c.end() - 1; ++it) {
        for (auto i = c.begin(); i != c.end() - 1; ++i) {
            if (*i > *(i + 1)) {
                iter_swap(i, i + 1);
                // auto buf = *i;
                // *i = *(i + 1);
                // *(i + 1) = buf;
            }
        }
    }
}

template <class Collection, class Comp>
void Sort(Collection& c, Comp&& comparator) {
    for (auto it = c.begin(); it != c.end() - 1; ++it) {
        for (auto i = c.begin(); i != c.end() - 1; ++i) {
            if (comparator(*i, *(i + 1)))
                iter_swap(i, i + 1);
        }
    }
}

template <class Collection>
void Unique(Collection& c) {
    // sort(c.begin(), c.end());
    // auto last = std::unique(std::begin(c), std::end(c));
    // c.erase(last, c.end());
    Sort(c);
    typename Collection::iterator endOfUnique = c.begin();
    for (typename Collection::iterator it = c.begin(); it != c.end(); it++) {
        if (*endOfUnique != *it)
            *(++endOfUnique) = *it;
    }
    c.erase(++endOfUnique, c.end());
}

template <class Collection, class Pred>
void Unique(Collection& c, Pred&& predicate) {
    Sort(c);
    typename Collection::iterator endOfUnique = c.begin();
    for (typename Collection::iterator it = c.begin(); it != c.end(); it++) {
        if (predicate(*endOfUnique, *it))
            *(++endOfUnique) = *it;
    }
    c.erase(++endOfUnique, c.end());
}

template <class Collection, class Pred>
void ForEach(Collection& c, Pred&& predicate) {
    for (auto& i : c)
        predicate(i);
}

template <class Collection, class T>
int IndexOf(const Collection& c, const T& value) {
    int index = 0;
    for (auto i : c) {
        if (i == value)
            return index;
        index++;
    }
    return -1;
}

template <class Collection, class Pred>
int IndexOf(const Collection& c, Pred&& predicate) {
    int index = 0;
    for (auto i : c) {
        if (predicate(i))
            return index;
        index++;
    }
    return -1;
}
