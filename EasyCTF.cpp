#include <iostream>
#include "auth.h"
#include "flag.h"

int main()
{
    std::string input;
    std::cout << "=== CTF Challenge ===\n";
    std::cout << "Enter the secret password: ";
    std::getline(std::cin, input);

    if (checkPassword(input)) {
        std::cout << "\nAccess granted!\n";
        std::cout << "Your flag is: " << getFlag() << "\n";
    }
    else {
        std::cout << "\nAccess denied. Try again.\n";
    }
    return 0;
}