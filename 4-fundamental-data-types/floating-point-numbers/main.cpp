#include <iomanip> // for std::setprecision()
#include <iostream>

int main() {
	std::cout << 5.0 << "\n";
	std::cout << 5.7f << "\n";
	std::cout << 9876543.21 << "\n";
	std::cout << "\n";
	std::cout << 9.87654321f << '\n';
	std::cout << 987.654321f << '\n';
	std::cout << 987654.321f << '\n';
	std::cout << 9876543.21f << '\n';
	std::cout << 0.0000987654321f << '\n';

	double d { 0.1 };
	std::cout << d << "\n"; // use default cout precision of 6
	std::cout << std::setprecision(17);
	std::cout << d << "\n";

	double d1 { 1.0 };
	std::cout << d1 << "\n";

	double d2 { 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 +0.1 + 0.1 };
	std::cout << d2 << "\n";

	double zero {0.0},
	       posinf {5.0 / zero}; // positive infinity
	std::cout << posinf << "\n";

	double neginf {-5.0 / zero}; // negative infinity
	std::cout << neginf << "\n";

	double nan {zero / zero}; // not a number
	std::cout << nan << "\n";

	return 0;
}
