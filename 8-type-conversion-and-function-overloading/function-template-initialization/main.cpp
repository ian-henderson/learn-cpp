#include <iostream>

template <typename T>
T max(T x, T y)
{
    return (x > y) ? x : y;
}

int main()
{
    // instantiates and calls function max<int>(int, int)
    std::cout << max<int>(1, 2) << '\n';
    std::cout << max<double>(1.0, 2.9) << '\n';
    std::cout << max(0.9, 0.8) << '\n'; // Best practice

    return 0;
}
