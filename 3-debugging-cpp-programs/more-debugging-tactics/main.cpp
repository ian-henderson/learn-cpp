#include <iostream>
#include <plog/Log.h>
#include <plog/Initializers/RollingFileInitializer.h>

// cloned plog git directory to ~/Developer
// added "export CPLUS_INCLUDE_PATH=$HOME/Developer/plog/include" to ~/.zshrc

int getUserInput()
{
	PLOGD << "getUserInput() called";

	std::cout << "Enter a number: ";
	int x{};
	std::cin >> x;
	return x;
}

int main()
{
	plog::init(plog::debug, "Logfile.txt");

	PLOGD << "main() called";

	int x{getUserInput()};
	std::cout << "You entered: " << x;

	return 0;
}
