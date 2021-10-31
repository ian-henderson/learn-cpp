#include <iostream>

int getUserValue() {
	int userValue{ };
	std::cout << "Enter value: ";
	std::cin >> userValue;
	return userValue;
}

void printDouble(int value) {
	std::cout << value << " doubled is " << value * 2 << "\n";
}

int main() {
	printDouble(getUserValue());
	return 0;
}
