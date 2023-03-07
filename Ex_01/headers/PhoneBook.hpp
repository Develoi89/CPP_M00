#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <sstream>

class PhoneBook
{
private:
    Contact contacts[8];
    int     i;
    int     m;
public:
    PhoneBook();
    ~PhoneBook();
    int addfc();
    int srchfc() const;
};

#endif