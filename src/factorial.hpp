#ifndef CPP_BASE_PROJECT_FACTORIAL_HPP
#define CPP_BASE_PROJECT_FACTORIAL_HPP

#include <concepts>

template<std::integral T>
T factorial(T number) {
    return number <= 1 ? number : factorial(number-1)*number;
}

#endif //CPP_BASE_PROJECT_FACTORIAL_HPP
