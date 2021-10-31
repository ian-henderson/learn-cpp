# learn-cpp

Each directory represents a chapter of learn-cpp and every chapter is divided
into several directories which have example code that is intended to be
compiled independently.

## Building

- cd to a given directory containing a `.cpp` file
- run `g++ *.cpp -std=c++2a -pedantic-errors -Wall -Weffc++ -Wextra -Wsign-conversion -g`

### Note

I created an alias in zsh to make compilation simpler: `alias c="g++ -std=c++2a -pedantic-errors -Wall -Weffc++ -Wextra -Wsign-conversion -g"` so that I can just run `c *.cpp` to compile.

# Running

Once the build is complete, run the executable with `./a.out`
