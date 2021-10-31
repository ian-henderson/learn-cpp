#include <cmath>
#include <cstdint>
#include <iostream>

std::int_fast64_t powint(int base, int exp)
{
	std::int_fast64_t result{1};
	while (exp)
	{
		if (exp & 1)
			result *= base;
		exp >>= 1;
		base *= base;
	}
	return result;
}

int main()
{
	std::cout << "Enter an integer: ";
	int x{};
	std::cin >> x;

	std::cout << "Enter another integer: ";
	int y{};
	std::cin >> y;

	std::cout << "The remainder is: " << x % y << '\n';

	if ((x % y) == 0)
		std::cout << x << " is evenly divisible by " << y << '\n';
	else
		std::cout << x << " is not evenly divisible by " << y << '\n';

	double a{std::pow(7.0, 12.0)}; // 3 to the 4th power
	std::cout << "a: " << a << '\n';
	std::int_fast64_t b{powint(7, 12)};
	std::cout << "b: " << b << '\n';

	return 0;
}
