#include <iostream>

int main()
{
    promptDebugMode();
    return 0;
}

void promptDebugMode()
{
    std::cout << "Would you like to enable debug mode?\n"
              << "Note: this will output the given text inputs to terminal"
              << endl;
}

