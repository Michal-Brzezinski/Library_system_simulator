#pragma once

#include <iostream>
#include <string>

using namespace std;

class Book
{
public:
	Book(string title, string author, string isbn);
	~Book();

	void getInfo();

	void setTitle(string title);
	string getTitle();

	void setAuthor(string author);
	string getAuthor();

	void setIsbn(string isbn);
	string getIsbn();

	void setAvailability(bool availability);
	bool getAvailability();

private:
	string m_title;
	string m_author;
	string m_isbn;
	bool m_availability;
};