#include <ctime> // for std::time
#include <iostream>
#include <random> // for std::mt19937

namespace MyRandom
{
    // Initialize our mersenne twister with a random seed based on the clock
    // (once at system startup)
    std::mt19937 mersenne{
        static_cast<std::mt19937::result_type>(std::time(nullptr))};
}

int getRandomNumber(int min, int max)
{
    // we can create a distribution in any function that needs it
    std::uniform_int_distribution die{min, max};
    // and then generate a random number from our global generator
    return die(MyRandom::mersenne);
}

int main()
{
    std::cout << getRandomNumber(1, 6) << '\n';
    std::cout << getRandomNumber(1, 10) << '\n';
    std::cout << getRandomNumber(1, 20) << '\n';

    return 0;
}
