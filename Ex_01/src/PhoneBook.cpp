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
    std::string Answer;
    std::string FirstName;
    std::string LastName;
    std::string PhoneNumber;
    std::string DarkestSecret;
    std::cout << "\x1b[36mPlease, type the first name:\x1b[37m" << std::endl;
    std::getline (std::cin, FirstName);
    std::cout << "\x1b[36mNow, type the last name:\x1b[37m" << std::endl;
    std::getline (std::cin, LastName);
    std::cout << "\x1b[36mHis phone:\x1b[37m" << std::endl;
    std::getline (std::cin, PhoneNumber);
    std::cout << "\x1b[36mAnd finally his darkest secret...:\x1b[37m" << std::endl;
    std::getline (std::cin, DarkestSecret);
    if (this->i == 8)
    {
        std::cout << "\033[1;31mWARNING, ACHTUNG,ATENTIE LA PERICOL, OH LA LA, CUIDADINI!!!, EH CUIDAO AHI!!!\x1b[37m" << std::endl;
        std::cout << "\x1b[36mThe PhoneBook is full, the oldest contact will be deleted, are you sure?" << std::endl;
        std::cout << "Type \033[1;32m(YES)\x1b[37m \x1b[36mor \033[1;32m(NO)\x1b[37m" << std::endl;
        std::getline (std::cin, Answer);
        while (this->i == 8)
        {
            if (Answer == "YES")
            {
                this->i = 0;
            }
            else if (Answer == "NO")
                return;
            else
            {
                std::cout << "\x1b[36mPlease, type only \033[1;32m(YES)\x1b[37m \x1b[36mor \033[1;32m(NO)\x1b[37m:" << std::endl;
                std::getline (std::cin, Answer);
            }
        }
    }
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
            std::cout << "\x1b[32m|\x1b[36m _" << i + 1 << " \x1b[37m";
            this->contacts[i].ShowIt();
            std::cout << "\x1b[32m|------------------------------------------------|\x1b[37m" << std::endl;
        }
    }
    std::stringstream tmp;
    std::string ss;
    std::getline(std::cin, ss);
    tmp << ss;
    tmp >> i;

    return;
}