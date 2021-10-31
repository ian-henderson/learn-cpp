#include <iostream>
#include <iterator>

// ref is a reference to the argument passed in, not a copy
void changeN(int &ref)
{
    ref = 6;
}

// Note: You need to specify the array size in the function declaration
void printElements(int (&arr)[4])
{
    // we can now do this since the array won't decay
    int length{static_cast<int>(std::size(arr))};

    for (int i{0}; i < length; ++i)
    {
        std::cout << arr[i] << '\n';
    }
}

int main()
{
    int value{5};               // normal integer
    int &ref{value};            // reference to variable value
    value = 6;                  // value is now 6
    ref = 7;                    // value is now 7
    std::cout << value << '\n'; // prints 7
    ++ref;
    std::cout << value << '\n'; // prints 8

    int n{5};
    std::cout << n << '\n';
    changeN(n); // note that this argument does not need to be a reference
    std::cout << n << '\n';

    int arr[]{99, 20, 14, 80};
    printElements(arr);

    return 0;
}
