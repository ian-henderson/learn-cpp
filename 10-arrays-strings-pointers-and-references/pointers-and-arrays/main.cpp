#include <iostream>

// parameter ptr contains a copy of the array's address
void changeArray(int *ptr)
{
    *ptr = 5; // so changing an array element changes the _actual_ array
}

void printSize(int *array)
{
    // array is treated as a pointer here
    std::cout << sizeof(array) << '\n'; // prints the size of a pointer, not the size of the array!
}

int main()
{
    int array[]{1, 1, 2, 3, 5, 8, 13, 21};

    // print address of the array's first element
    std::cout << "Element 0 has address: " << &array[0] << '\n';

    // print the value of the pointer the array decays to
    std::cout << "The array decays to a pointer holding address: " << array << '\n';

    std::cout << sizeof(array) << '\n'; // will print sizeof(int) * array length
    printSize(array);                   // the array argument decays into a pointer here

    std::cout << "Element 0 has value: " << array[0] << '\n';
    changeArray(array);
    std::cout << "Element 0 has value: " << array[0] << '\n';

    return 0;
}
