#include <iostream>
#include <iterator> // for std::size

int *find(int *begin, int *end, int value)
{
    int *p{begin};
    while (p != end)
    {
        if (*p == value)
        {
            break;
        }
        ++p;
    }
    return p;
}

bool isVowel(char ch)
{
    switch (ch)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        return true;
    default:
        return false;
    }
}

int main()
{
    char name[]{"Nobody expects the Spanish Inquisition!"};
    int arrayLength{static_cast<int>(std::size(name))};
    int numVowels{0};

    for (char *ptr{name}; ptr != (name + arrayLength); ++ptr)
    {
        if (isVowel(*ptr))
        {
            ++numVowels;
        }
    }

    std::cout << name << " has " << numVowels << " vowels.\n";

    auto anotherNumVowels{std::count_if(std::begin(name), std::end(name), isVowel)};
    std::cout << name << " has " << anotherNumVowels << " vowels.\n";

    int arr[]{2, 5, 4, 10, 8, 20, 16, 40};
    std::cout << 2 [arr] << '\n';

    // Search for the first element with value 20.
    int *found{find(std::begin(arr), std::end(arr), 20)};

    // If an element with value 20 was found, print it.
    if (found != std::end(arr))
    {
        std::cout << *found << '\n';
    }

    return 0;
}
