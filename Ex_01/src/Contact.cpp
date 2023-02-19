#include "../headers/Contact.hpp"
#include <iostream>

Contact::Contact(void)
{
    return;
}

Contact::~Contact(void)
{
    return;
}

Contact::Contact(std::string FirstName, std::string LastName, std::string PhoneNumber, std::string DarkestSecret)
{
    Contact::FirstName = FirstName;
    Contact::LastName = LastName;
    Contact::PhoneNumber = PhoneNumber;
    Contact::DarkestSecret = DarkestSecret;
    return;
}

int Contact::ShowIt(void)
{
    std::cout << Contact::FirstName << "|" << Contact::LastName << "|" << Contact::PhoneNumber << "|" << Contact::DarkestSecret << "|" << std::endl;
    return 0;
}