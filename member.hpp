#pragma once
#include <iostream>
#include <string>

using namespace std;

class Member
{
	public:
		Member(string name);
		~Member();

		void setMembersName(string name);
		string getMembersName();

		void setMembersBooks(unsigned int BooksBorrowed);
		unsigned int getMembersBooks();

		unsigned long borrowBook();
		unsigned long returnBook();

	private:
		string m_name;
		unsigned int m_BooksBorrowed;
};