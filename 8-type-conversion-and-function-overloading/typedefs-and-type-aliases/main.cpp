#include <iostream>

int main()
{
    // define distance_t as an alias for type double
    using distance_t = double;
    // defines a variable of type double
    distance_t milesToDestination{3.4};
    // prints a double value
    std::cout << "milesToDestination: " << milesToDestination << '\n';

    // Type aliases aren't new types, just new identifiers for existing types
    using miles_t = long;
    using speed_t = long;
    miles_t distance{5}; // distance is actually just a long
    speed_t mhz{3200};   // mhz is actually just a long

    // The following is syntactically valid (but semantically meaningless)
    distance = mhz;
    std::cout << "distance: " << distance << '\n';

    return 0;
}
