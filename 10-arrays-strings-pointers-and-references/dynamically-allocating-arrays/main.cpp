#include <iostream>

int main()
{
    std::cout << "Enter a positive integer: ";
    int length{};
    std::cin >> length;

    // use array new. Note that length does not need to be constant!
    int *array{new int[static_cast<std::size_t>(length)]{}};

    std::cout << "Allocated an array of integers of length " << length
              << ".\nUsed " << sizeof(int) * static_cast<std::size_t>(length)
              << " bytes of memory.\n";

    array[0] = 5; // set element 0 to value 5

    delete[] array; // use array delete to deallocate array

    // we don't need to set array to nullptr/0 here because it's going to go
    // out of scope immediately after this anyway

    return 0;
}
