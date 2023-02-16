#include "../headers/PhoneBook.hpp"
#include <iostream>

int main(void)
{
    PhoneBook PhoneBook;
    std::string command;
    while (42)
    {
        std::getline (std::cin, command);
        if (command == "ADD")
            PhoneBook.addfc();
        else if (command == "SEARCH")
            PhoneBook.srchfc();
        else if (command == "EXIT")
            break;
    }
    return 0;
}