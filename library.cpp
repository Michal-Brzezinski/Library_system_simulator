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
	if (b.getAuthor() != "bad" && b.getTitle() != "bad" && b.getIsbn() != "bad")
	{
		int i = 0;
		for (; i < books.size(); i++)
		{
			if (b.getIsbn() == books.at(i).getIsbn()) break;
		};
		if (i < books.size())
		{
			if (b.getIsbn() == books.at(i).getIsbn())
			{
				books.erase(books.begin() + i);
			}
		}
	}
	else std::cout << "\nWprowadzono bledne dane, lub nie ma takiej ksiazki\n";
}


void Library::borrowBook(Member a, string isbn)
{
	if (a.getVerifier() == true)
	{
		int i = 0;
		for (; i < books.size(); i++)
		{
			if (isbn == books.at(i).getIsbn()) break;
		};
		if (i < books.size())
		{
			//if (isbn == books.at(i).getIsbn())
			//{
				books.at(i).setAvailability(false);
				std::cout << "Uzytkownik: " << a.getMembersName() << " pozyczyl ksiazke: " << books.at(i).getTitle() << std::endl;
				
			//}
		}
		else std::cout << "Brak ksiazek o podanym numerze" << std::endl;
		
		i = 0;

		for (; i < members.size(); i++)
		{
			if (a.getMembersName() == members.at(i).getMembersName()) break;
		};
		if (i < members.size())
		{
			//if (isbn == books.at(i).getIsbn())
			//{
			members.at(i).borrowBook();

			//}
		}
		else std::cout << "Brak uzytkownikow o podanej nazwie" << std::endl;
		
		
	}


}


void Library::returnBook(Member a, string isbn)
{
	
	if (a.getVerifier() == true)
	{
		int i = 0;
		for (; i < books.size(); i++)
		{
			if (isbn == books.at(i).getIsbn()) break;
		};

		if (i < books.size())
		{
			//if (isbn == books.at(i).getIsbn())
			//{
				books.at(i).setAvailability(true);
				std::cout << "Uzytkownik: " << a.getMembersName() << " oddal ksiazke: " << books.at(i).getTitle() << std::endl;
				
			//}
		}

		else std::cout << "Brak ksiazek o podanym numerze" << std::endl;
	
		i = 0;
		for (; i < members.size(); i++)
		{
			if (a.getMembersName() == members.at(i).getMembersName()) break;
		};
		if (i < members.size())
		{
			//if (isbn == books.at(i).getIsbn())
			//{
			members.at(i).returnBook();

			//}
		}
		else std::cout << "Brak uzytkownikow o podanej nazwie" << std::endl;


		

	}
	
	

}


void Library::displayBooks()
{
	for (int i = 0; i < books.size(); i++)
	{		
			std::cout << i+1 << ". ";
			books.at(i).getInfo();
			std::cout << "\n\n";
	}
}

void Library::getBookInfo()
{
	int i = 0;
	string isbn;
	std::cout << "\nPodaj numer isbn ksiazki: ";
	getline(cin,isbn);
	for (; i < books.size(); i++)
	{
		if (isbn == books.at(i).getIsbn()) break;
	};

	if (i < books.size())
	{
		if (isbn == books.at(i).getIsbn())
		{
			books.at(i).getInfo();
		}
	}
	else std::cout << "\nBrak ksiazek o podanym numerze" << std::endl;
}


void Library::addMember(Member m)
{
	members.push_back(m);
}


void Library::removeMember(Member m)
{
	if (m.getMembersName()!="bad")
	{
		int i = 0;
		for (; i < members.size(); i++)
		{
			if (m.getMembersName() == members.at(i).getMembersName()) break;
		}

		if (i < members.size()) {
			if (m.getMembersName() == members.at(i).getMembersName())
			{
				members.erase(members.begin() + i);
			}
		}
	}
	else std::cout << "\nWprowadzono bledne dane, lub nie ma takiego uzytkownika\n";
}

void Library::displayMembers()
{
	for (int i = 0; i < members.size(); i++)
	{
		std::cout << i+1 << ". ";
		members.at(i).getInfo();
		std::cout << "\n\n";
	}

}

string Library::chceck_member(string  name)
{
	int i = 0;
	for (; i < members.size(); i++)
	{
		if (name == members.at(i).getMembersName()) break;
	}

	if (i < members.size())
	{
		if (name == members.at(i).getMembersName())
		{
			return members.at(i).getMembersName();
		}
	}
	else
	{
		std::cout << "Brak uzytkownikow o podanej nazwie" << std::endl;
		return name = "bad";
	}

}
string Library::check_isbn(string isbn)
{
	int i=0;
	for (; i < books.size() ; i++)
	{
		if (isbn == books.at(i).getIsbn()) break;
	}

	if (i < books.size())
	{
		if (isbn == books.at(i).getIsbn())
		{
			return books.at(i).getIsbn();
		}
	}

	else
	{
		std::cout << "Brak ksiazek o podanym numerze" << std::endl;
		return isbn = "0";
	}
}

void Library::clear_vectors()
{
	members.clear();
	books.clear();

}

Book Library::pass_book(string isbn)
{
	int i = 0;
	for (; i < books.size(); i++)
	{
		if (isbn == books.at(i).getIsbn()) break;
	}

	if (i < books.size())
	{
		if (isbn == books.at(i).getIsbn())
		{
			return books.at(i);
		}
	}
	else { Book a("bad","bad", "bad"); return a; }
}

Member Library::pass_member(string name)
{
	int i = 0;
	for (; i < members.size(); i++)
	{
		if (name == members.at(i).getMembersName()) break;
	}

	if (i < members.size())
	{
		if (name == members.at(i).getMembersName())
		{
			return members.at(i);
		}
	}
	else { Member a("bad"); return a; }
}