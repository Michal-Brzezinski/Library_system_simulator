#include <iostream>
#include <string>
#include <vector>
#include "library.hpp"

void Library::addBook(Book b)
{
	books.push_back(b);
}


void Library::removeBook(Book b)
{
	int i = 0;
	while (b.getIsbn() != books.at(i).getIsbn()) i++;

	if (b.getIsbn() == books.at(i).getIsbn())
	{
		books.erase(books.begin() + i);
	}

	
}


void Library::borrowBook(Member a, string isbn)
{
	if (a.getVerifier() == true)
	{
		int i = 0;
		while (isbn != books.at(i).getIsbn()) i++;

		if (isbn == books.at(i).getIsbn())
		{
			books.at(i).setAvailability(false);
			std::cout << "Uzytkownik: " << a.getMembersName() << "pozyczyl ksiazke: " << books.at(i).getTitle() << std::endl;
		}

		else std::cout << "Brak ksiazek o podanym numerze" << std::endl;
	}

	a.borrowBook();
}


void Library::returnBook(Member a, string isbn)
{
	
	if (a.getVerifier() == true)
	{
		int i = 0;
		while (isbn != books.at(i).getIsbn()) i++;

		if (isbn == books.at(i).getIsbn())
		{
			books.at(i).setAvailability(true);
			std::cout << "Uzytkownik: " << a.getMembersName() << "oddal ksiazke: " << books.at(i).getTitle() << std::endl;
		}

		else std::cout << "Brak ksiazek o podanym numerze" << std::endl;
	}
	
	a.returnBook();

}


void Library::displayBooks()
{
	for (int i = 0; i < books.size(); i++)
	{		
			std::cout << i << ". ";
			books.at(i).getInfo();
			std::cout << "\n\n";
	}
}