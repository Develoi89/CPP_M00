#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact
{
private:
    std::string FirstName;
    std::string LastName;
    std::string PhoneNumber;
    std::string DarkestSecret;
public:
    Contact();
    Contact(std::string FirstName, std::string LastName, std::string PhoneNumber, std::string DarkestSecret);
    int ShowIt();
    int CompleteField();
    ~Contact();
};

#endif