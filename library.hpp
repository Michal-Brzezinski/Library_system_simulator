#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "book.hpp"

using namespace std;

class library
{
	public:
		
		addBook(Book b);
		removeBook(Book b);
		borrowBook(Member, isbn);
		returnBook(Member, isbn);
		displayBooks();

	private:
		std::vector<Book> books;

};