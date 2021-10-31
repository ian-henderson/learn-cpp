#include <algorithm> // std::max
#include <cmath> // std::abs
#include <iostream>

/**
 * Comparison of floating point numbers is a difficult topic, and there’s 
 * no “one size fits all” algorithm that works for every case. However, 
 * the approximatelyEqualAbsRel() should be good enough to handle most cases 
 * you’ll encounter.
 */

bool approximatelyEqual(double a, double b, double epsilon) 
{
	return std::abs(a - b) <= (std::max(std::abs(a), std::abs(b)) * epsilon);
}

bool approximatelyEqualAbsRel(double a, double b, double absEpsilon, double relEpsilon) 
{
	// Check if the numbers are really close -- needed when comparing numbers near zero.
	double diff { std::abs(a - b) };
	if (diff <= absEpsilon)	return true;

	// Otherwise fall back to Knuth's algorithm
	return (diff <= (std::max(std::abs(a), std::abs(b)) * relEpsilon));
}

int main() 
{
	// a is really close to 1.0, but has rounding errors, so it's slightly
	// smaller than 1.0
	double a { 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 };

	std::cout << std::boolalpha; // print bools as true or false

	std::cout << "approximatelyEqual(a, 1.0, 1e-8): ";
	std::cout << approximatelyEqual(a, 1.0, 1e-8) << '\n';     // compare "almost 1.0" to 1.0
	std::cout << "approximatelyEqual(a-1.0, 0.0, 1e-8): ";
	std::cout << approximatelyEqual(a-1.0, 0.0, 1e-8) << '\n'; // compare "almost 0.0" to 0.0
	std::cout << "approximatelyEqualAbsRel(a-1.0, 0.0, 1e-12, 1e-8): ";
	std::cout << approximatelyEqualAbsRel(a-1.0, 0.0, 1e-12, 1e-8) << '\n'; // compare "almost 0.0" to 0.0

	return 0;
}
