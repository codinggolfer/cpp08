#include "Span.hpp"

Span::Span() : N(0) {}

Span::Span(unsigned int N) : N(N) {
    vec.reserve(N);
}

Span::Span(Span const &other) : N(other.N), vec(other.vec) {
    if (this != &other)
        *this = other;
}

Span &Span::operator=(Span const &other) {
    if (this != &other) {
        N = other.N;
        vec = other.vec;
    }
    return *this;
}

void Span::addNumber(int n) {
    if (vec.size() < N)
        vec.push_back(n);
    else
        throw std::out_of_range("Vector is full");
}

unsigned int Span::shortestSpan() {
    return ::smalestSpan(vec);
}

unsigned int Span::longestSpan() {
    return ::biggestSpan(vec);
}

void Span::adderAll(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    if (vec.size() + std::distance(begin, end) > N)
        throw std::out_of_range("Vector is full");
    vec.insert(vec.end(), begin, end);
}

Span::~Span() {
    vec.clear();
}