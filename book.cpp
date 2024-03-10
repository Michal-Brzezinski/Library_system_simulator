#include <iostream>
#include <string>
#include "book.hpp"

Book::Book(string title, string author, string isbn) : m_title(title), m_author(author), m_isbn(isbn)
{
	m_availability = true;
}

Book::~Book()
{
	std::cout << "Niszcze ksiazke\n" << std::endl;
}
	
	void Book::getInfo()
	{
		std::cout << "Tytul: " << m_title << "\nAutor: " << m_author << "\nnr Isbn: " << m_isbn << std::endl;
	}

	
	void Book::setTitle(string title)
	{
		m_title = title;
	}
	
	
	string Book::getTitle()
	{
		return m_title;
	}

	
	void Book::setAuthor(string author)
	{
		m_author = author;
	}

	
	string Book::getAuthor()
	{
		return m_author;
	}

	
	void Book::setIsbn(string isbn)
	{
		m_isbn = isbn;
	}
	
	
	string Book::getIsbn()
	{
		return m_isbn;
	}

	
	void Book::setAvailability(bool availability)
	{
		m_availability = availability;
	}
	
	
	bool Book::getAvailability()
	{
		return m_availability;
	}
