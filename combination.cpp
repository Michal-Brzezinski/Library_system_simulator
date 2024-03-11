#include <iostream>
#include <string>
#include "library.hpp"
#include "service.hpp"

using namespace std;

string book_author()
{
	string n_author;

	cout << "\nWprowadz imie i nazwisko autora: ";
	getline(cin, n_author);
	return n_author;
}

string book_title()
{
	string n_title;
	cout << "\nWprowadz tytul ksiazki: ";
	getline(cin, n_title);
	return n_title;
}

string book_isbn()
{
	string  n_isbn;
	cout << "\nWprowadz numer isbn: ";
	getline(cin,n_isbn);
	return n_isbn;
}

string giving_member()
{
	string login;
	cout << "\nWprowadz nazwe uzytkownika: ";
	getline(cin, login);
	return login;
}

