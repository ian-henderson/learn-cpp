#include <iostream>
#include <typeinfo> // for typeid()

int main()
{
    int i{2};
    double d{3.5};
    // show us the type of i + d
    std::cout << typeid(i + d).name() << ' ' << i + d << '\n';

    short a{4};
    short b{5};
    // show us the type of a + b// show us the type of a + b
    std::cout << typeid(a + b).name() << ' ' << a + b << '\n';

    // 5u means treat 5 as an unsigned integer
    std::cout << typeid(5u - 10).name() << ' ' << 5u - 10 << '\n';

    std::cout << std::boolalpha << (-3 < 5u) << '\n';

    return 0;
}
