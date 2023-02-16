#include "../headers/PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
    std::cout << "\x1b[32mWellcome to the best PhoneBook of this Cluster!!!\x1b[37m" << std::endl;
    std::cout << "Now, tell me what do you need?"  << std::endl;
    std::cout << "\x1b[32mADD\x1b[37m, to add a new contact."  << std::endl;
    std::cout << "\x1b[32mSEARCH\x1b[37m, to see all contacts and show details of one of them."  << std::endl;
    std::cout << "\x1b[32mEXIT\x1b[37m, to close and finish the best PhoneBook."  << std::endl;
    return;
}
PhoneBook::~PhoneBook(void)
{
    return;
}

void PhoneBook::addfc(void)
{
    std::cout << "building addfc" << std::endl;
    return;
}

void PhoneBook::srchfc(void)
{
    std::cout << "building srchfc" << std::endl;
    return;
}