#pragma once

#include <iostream>

template <typename T> int smalestSpan(T& container) {
    if (container.empty() || container.size() == 1)
        throw std::out_of_range("Not enough elements in the container.");
    
    std::sort(container.begin(), container.end());

    int minSpan = std::numeric_limits<int>::max();

    for (size_t i = 1; i < container.size(); ++i) {
        int diff = container[i] - container[i - 1];
        if (diff < minSpan) {
            minSpan = diff;
        }
    }
    return minSpan;
}

template <typename T> int biggestSpan(T& container) {
    if (container.empty() || container.size() == 1)
        throw std::out_of_range("Not enough elements in the container.");

    std::sort(container.begin(), container.end());

    return container.back() - container.front();
}


class Span
{
private:
    unsigned int N;
    std::vector<int> vec;
public:
    Span();
    Span(unsigned int N);
    Span(Span const &other);
    Span &operator=(Span const &other);

    void adderAll(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    void addNumber(int n);
    int shortestSpan();
    int longestSpan();


    ~Span();
};

