#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "book.hpp"
#include "member.hpp"

using namespace std;

class Library
{
	public:
		
		void addBook(Book b);
		void removeBook(Book b);
		void borrowBook(Member a, string isbn);
		void returnBook(Member a, string isbn);
		void displayBooks();

	private:
		std::vector<Book> books;

};