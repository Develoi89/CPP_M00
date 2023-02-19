#include "../headers/PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
    return;
}
PhoneBook::~PhoneBook(void)
{
    return;
}

void PhoneBook::addfc(void)
{
    if (this->i == 8)
        this->i = 0;
    std::string FirstName;
    std::string LastName;
    std::string PhoneNumber;
    std::string DarkestSecret;
    std::getline (std::cin, FirstName);
    std::getline (std::cin, LastName);
    std::getline (std::cin, PhoneNumber);
    std::getline (std::cin, DarkestSecret);
    this->contacts[this->i] = Contact(FirstName, LastName, PhoneNumber, DarkestSecret);
    this->i++;
    return;
}

void PhoneBook::srchfc(void)
{
    int i;
    std::cout << "\x1b[32m ________________________________________________ " << std::endl;
    std::cout << "|       THE BEST PHONEBOOK OF THIS CLUSTER       |" << std::endl;
    std::cout << "|------------------------------------------------|" << std::endl;
    std::cout << "| Id | 1st Name | Lst Name | PhNumber | DkSecret |" << std::endl;
    std::cout << "|------------------------------------------------|\x1b[37m" << std::endl;
    if (this->i == 0)
        std::cout << "The PhoneBook is empty" << std::endl;
    else
    {
        for (i = 0; i <= 7; i++)
        {
            std::cout << "\x1b[32m|\x1b[36m _" << i + 1 << " \x1b[36m\x1b[37m";
            this->contacts[i].Contact::ShowIt();
            std::cout << "\x1b[32m|------------------------------------------------|\x1b[37m" << std::endl;
        }
    }
    return;
}