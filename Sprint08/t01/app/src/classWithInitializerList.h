#pragma once

#include <iostream>
#include <vector>
#include <string>

template <typename T>
class ClassWithInitializerList final {
public:
    template <typename... Args>
    ClassWithInitializerList(Args&& ... args) : m_vecOfArs({args...}) {}
    ClassWithInitializerList(const std::initializer_list<T> lst) : m_vecOfArs(lst) {}
    ClassWithInitializerList(const std::vector<T>& vec) : m_vecOfArs(vec) {}

    void outputVector() const {
        for (auto i : m_vecOfArs)
            std::cout << i << std::endl;
    }
private:
    std::vector<T> m_vecOfArs;
};
