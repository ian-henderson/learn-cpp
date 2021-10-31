#include <iostream>  // for std::cout and std::cin

int main()
{
	std::cout << "Enter two numbers separated by a space: ";

	int x{ }, y{ }; // define variable x and y to hold user input (and zero-initialize it)
	std::cin >> x >> y; // get two numbers and store in variable x and y respectively

	std::cout << "You entered " << x << " and " << y << '\n';

	return 0;
}
