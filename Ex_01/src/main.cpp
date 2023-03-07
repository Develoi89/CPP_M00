#include "../headers/PhoneBook.hpp"
#include "../headers/Utils.hpp"
#include <iostream>

int main(void)
{
    PhoneBook phoneBook;
    std::string command;
    while (42)
    {
        std::cout << "\x1b[32mWellcome to the best PhoneBook of this Cluster!!!\x1b[37m" << std::endl;
        std::cout << "Now, tell me what do you need?"  << std::endl;
        std::cout << "\x1b[32mADD\x1b[37m, to add a new contact."  << std::endl;
        std::cout << "\x1b[32mSEARCH\x1b[37m, to see all contacts and show details of one of them."  << std::endl;
        std::cout << "\x1b[32mEXIT\x1b[37m, to close and finish the best PhoneBook."  << std::endl;
        if(std::getline(std::cin, command))
        {
            command = DelSpaces(command);
            if (command == "ADD")
            {
                if (phoneBook.addfc() == 1)
                    break;
            }
            else if (command == "SEARCH")
            {
                if (phoneBook.srchfc() == 1)
                    break;
            }
            else if (command == "EXIT")
                break;
        }
        else
            break;
    }
    return 0;
}