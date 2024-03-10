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

void Member::borrowBook()
{
	m_tMtL = true;
	if(m_BooksBorrowed < std::numeric_limits<unsigned int>::max())
	++m_BooksBorrowed;
	else
	{
		m_tMtL = false;
		std::cout << "Przekroczono limit pozyczen czytelnika" << std::endl;
	}
}

void Member::returnBook()
{
	m_tMtL = true;
	if (m_BooksBorrowed == 0)
	{
		m_tMtL = false;
		std::cout << "Na ten moment nie ma zadnych ksiazek, wiec nie mozna oddac" << std::endl;
	}
	
	else --m_BooksBorrowed;
}

bool Member::getVerifier()
{
	return m_tMtL;
}