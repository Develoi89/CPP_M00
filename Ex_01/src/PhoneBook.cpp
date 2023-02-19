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
    std::cout << " Id | First Name | Last Name | Phone Number | Darkest Secret |" << std::endl;
    for (i = 0; i <= this->i; i++)
    {
        std::cout << i << std::endl;
        this->contacts[i].Contact::ShowIt();
    }
    return;
}