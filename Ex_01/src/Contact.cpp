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

int ShowField( std::string Str)
{
    int i;
    int l = Str.size();
    if (l <= 10)
    {
        std::cout << "\x1b[32m|\x1b[37m" << Str;
        for (l = l - 10; l < 0; l++)
            std::cout << " ";
    }
    else
    {
        std::cout << "\x1b[32m|\x1b[37m";
        for (i = 0; i <= 8; i++)
            std::cout << Str[i];
        std::cout << ".";
    }
    return 0;
}

int Contact::ShowIt(void) const
{
    ShowField(FirstName);
    ShowField(LastName);
    ShowField(PhoneNumber);
    ShowField(DarkestSecret);
    std::cout << "\x1b[32m|\x1b[37m";
    std::cout << std::endl;
    return 0;
}

int Contact::CompleteField(void) const
{
    std::cout << "\x1b[36mFirst Name:\x1b[37m" << std::endl;
    std::cout << FirstName << std::endl;
    std::cout << "\x1b[36mLast Name:\x1b[37m" << std::endl;
    std::cout << LastName << std::endl;
    std::cout << "\x1b[36mPhone Number:\x1b[37m" << std::endl;
    std::cout << PhoneNumber << std::endl;
    std::cout << "\x1b[36mDarkest Secret:\x1b[37m" << std::endl;
    std::cout << DarkestSecret << std::endl;
    return 0;
}