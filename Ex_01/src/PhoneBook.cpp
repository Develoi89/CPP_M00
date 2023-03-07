#include "../headers/PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
    i = 0;
    m = 0;
    return;
}
PhoneBook::~PhoneBook(void)
{
    return;
}

std::string DelSpaces(std::string Str)
{
    int l = Str.find_first_not_of(" ");
    if (l > 0)
        Str.erase(0, l - 1);
    else
        return Str;
    return Str;
}

std::string saveit(void)
{
    std::string str;

    while(str.size() <= 0)
    {
        if(std::getline (std::cin, str))
        {
            str = DelSpaces(str);
            if(str.size() <= 0)
                std::cout << "\033[1;31mPlease, complete the field.\x1b[37m" << std::endl;
        }
        else
            return str;
    }
    return str;
}

void PhoneBook::addfc(void)
{
    std::string Answer;
    std::string FirstName;
    std::string LastName;
    std::string PhoneNumber;
    std::string DarkestSecret;
    std::cout << "\x1b[36mPlease, type the first name:\x1b[37m" << std::endl;
    if ((FirstName = saveit()).size() <= 0)
        return;
    std::cout << "\x1b[36mNow, type the last name:\x1b[37m" << std::endl;
    if ((LastName = saveit()).size() <= 0)
        return;
    std::cout << "\x1b[36mHis phone:\x1b[37m" << std::endl;
    if ((PhoneNumber = saveit()).size() <= 0)
        return;
    std::cout << "\x1b[36mAnd finally his darkest secret...:\x1b[37m" << std::endl;
    if(std::getline (std::cin, DarkestSecret))
        DarkestSecret = DelSpaces(DarkestSecret);
    else
        return;
    if (this->i == 8)
    {
        std::cout << "\033[1;31mWARNING, ACHTUNG,ATENTIE LA PERICOL, OH LA LA, CUIDADINI!!!, EH CUIDAO AHI!!!\x1b[37m" << std::endl;
        std::cout << "\x1b[36mThe PhoneBook is full, the oldest contact will be deleted, are you sure?" << std::endl;
        std::cout << "Type \033[1;32m(YES)\x1b[37m \x1b[36mor \033[1;32m(NO)\x1b[37m" << std::endl;
        if(std::getline (std::cin, Answer))
            while (this->i == 8)
            {
                if (Answer == "YES")
                    this->i = 0;
                else if (Answer == "NO")
                    return;
                else
                {
                    std::cout << "\x1b[36mPlease, type only \033[1;32m(YES)\x1b[37m \x1b[36mor \033[1;32m(NO)\x1b[37m:" << std::endl;
                    std::getline (std::cin, Answer);
                }
            }
        else
            return;
    }
    this->contacts[this->i] = Contact(FirstName, LastName, PhoneNumber, DarkestSecret);
    this->i++;
    if(this->m < 8)
        this->m++;
    return;
}

void PhoneBook::srchfc(void) const
{
    int l;
    std::cout << "\x1b[32m ________________________________________________ " << std::endl;
    std::cout << "|       THE BEST PHONEBOOK OF THIS CLUSTER       |" << std::endl;
    std::cout << "|------------------------------------------------|" << std::endl;
    std::cout << "| Id | 1st Name | Lst Name | PhNumber | DkSecret |" << std::endl;
    std::cout << "|------------------------------------------------|\x1b[37m" << std::endl;
    if (this->m == 0)
    {
        std::cout << "\033[1;31mThe PhoneBook is empty\x1b[37m" << std::endl;
        return;
    }
    else
    {
        for (l = 0; l <= 7; l++)
        {
            std::cout << "\x1b[32m|\x1b[36m _" << l + 1 << " \x1b[37m";
            this->contacts[l].ShowIt();
            std::cout << "\x1b[32m|------------------------------------------------|\x1b[37m" << std::endl;
        }
    }
    l = 0;
    while(42)
    {
        std::cout << "\x1b[36mPlease, choose an ID:\x1b[37m" << std::endl;
        std::stringstream tmp;
        std::string ss;
        if(std::getline(std::cin, ss))
        {
            tmp << ss;
            tmp >> l;
        }
        else
            return;
        if (l > this->m || l < 1)
            std::cout << "\033[1;31mPlease type a valid ID.\x1b[37m" << std::endl;
        else   
        {
            this->contacts[l - 1].CompleteField();
            return;
        }
    }
    return;
}