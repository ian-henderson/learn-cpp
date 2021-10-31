#include <iostream>

int main()
{
    // c style casting (avoid)
    int x{10};
    int y{4};
    // convert x to a double so we get floating point division
    double d{(double)x / y};
    std::cout << "d: " << d << '\n'; // prints "d: 2.5"

    // c++ style casting (preferred)
    char c{'a'};
    // prints "c: a 97"
    std::cout << "c: " << c << ' ' << static_cast<int>(c) << '\n';

    int i{48};
    // explicit conversion from int to char, so that a char is assigned to
    // variable ch (as opposed to implicitly converting eg "char ch = i;")
    char ch{static_cast<char>(i)};
    std::cout << "ch: " << ch << '\n';

    return 0;
}
