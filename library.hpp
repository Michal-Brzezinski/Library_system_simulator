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
		void getBookInfo();
		void displayBooks();
		void addMember(Member m);
		void removeMember(Member m);
		void displayMembers();
		string chceck_member(string  name);
		string check_isbn(string isbn);
		void clear_vectors();
		Book pass_book(string isbn);
		Member pass_member(string name);
	private:
		std::vector<Book> books;
		std::vector<Member> members;
};