#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Member
{
	public:
		Member(string name);

		void setMembersName(string name);
		string getMembersName();

		void setMembersBooks(unsigned int BooksBorrowed);
		unsigned int getMembersBooks();

		void getInfo();

		void borrowBook();
		void returnBook();

		bool getVerifier();


	private:
		string m_name;
		unsigned int m_BooksBorrowed;
		bool m_tMtL=true; /*too Much/too Low (tMtL) stands for member's error while trying to return
					book, but doesn't have any or while trying to borrow book, but has too much*/
};