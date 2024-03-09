#include <iostream>
#include <string>
#include "member.hpp"

Member::Member(string name)
{
	m_name = name;
}

Member::~Member()
{
	std::cout << "Teraz jest niszczony uzytkownik (member)\n";
}

void Member::setMembersName(string name)
{
	m_name = name;
}

string Member::getMembersName()
{
	return m_name;
}

void Member::setMembersBooks(unsigned int BooksBorrowed)
{
	m_BooksBorrowed = BooksBorrowed;
}

unsigned int Member::getMembersBooks()
{
	return m_BooksBorrowed;
}