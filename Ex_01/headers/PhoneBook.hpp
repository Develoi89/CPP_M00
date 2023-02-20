#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <sstream>

class PhoneBook
{
private:
    Contact contacts[8];
    int     i;
public:
    PhoneBook();
    ~PhoneBook();
    void addfc();
    void srchfc();
};

#endif