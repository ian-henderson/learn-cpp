#include <iostream>

template <typename T, typename U>
auto max(T x, U y)
{
    return (x > y) ? x : y;
}

// abbreviated function template: c++20 short-hand equivalent of max fn def.
// Best practice if 2+ independent variables are needed and c++20 or newer is
// available.
auto min(auto x, auto y)
{
    return (x < y) ? x : y;
}

int main()
{
    std::cout << max(35.9, 2) << '\n';
    std::cout << min(38, 0.1) << '\n';

    return 0;
}
