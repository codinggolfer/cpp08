#pragma once

#include <iostream>
#include <algorithm>

template <typename T> void easyfind(T &container, int value) {
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw std::out_of_range("Value not found");
    std::cout << "Value found: " << *it << std::endl;
}