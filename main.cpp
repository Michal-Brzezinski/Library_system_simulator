#include <iostream>
#include <string>
#include <vector>
#include "library.hpp"
#include "service.hpp"
#include "member.hpp"
#include "book.hpp"

int main()
{
    Library master;
    int choice=0;
    string start;
   
        menu();
        while (1) 
        {
            cout << "Podaj numer opcji, jaka chcesz wykonac:\t";
            std::cin >> choice;
            while (getchar() != '\n');
            switch (choice)
            {
            case 1:
            {
                Member a(giving_member());
                master.addMember(a);
            }
            break;

            case 2:
            {
                Book b(book_title(), book_author(), book_isbn());
              master.addBook(b);
                break;
            }
            case 3:
            {
                master.displayMembers(); 
                break;
            }
            case 4:
            {
                master.displayBooks(); 
                break;
            }
            case 5:
            {
                master.getBookInfo();
                break;
            }
            case 6:
            {
                Member name("nah");
                name.setMembersName(master.chceck_member(giving_member()));
                start = master.check_isbn(book_isbn());

                if((name.getMembersName() != "bad") && (start != "0")) master.borrowBook(name, start);
                
                break;
            }
            case 7:
            {
                Member name("nah");
                name.setMembersName(master.chceck_member(giving_member()));
                start = master.check_isbn(book_isbn());

                if ((name.getMembersName() != "bad") && (start != "0")) master.returnBook(name, start);
                
                break;
            }
            case 8:
            {
                master.removeMember(master.pass_member(giving_member()));
                break;
                
            }
            case 9:
            {
                master.removeBook(master.pass_book(book_isbn()));
                break;
            }
            default:
            {
                master.clear_vectors();

                return 0;
            }

            }
        }

        /*/
            std::vector<std::string> vect;

            std::string s1 = "test1 ";
            std::string s2 = "test2 ";
            std::string s3 = "test3 ";
            std::string s4 = "test4 ";
            std::string s5 = "test5 ";

            vect.push_back(s1);
            vect.push_back(s2);
            vect.push_back(s3);
            vect.push_back(s4);
            vect.push_back(s5);

            std::cout << vect.size() << std::endl;

            for (int i = 0; i < vect.size(); i++)
                std::cout << vect.at(i) << i << ". " << "\n" << std::endl;

            vect.erase(vect.begin() + 1);

            for (int i = 0; i < vect.size(); i++)
                std::cout << vect.at(i) << i << ". " << std::endl;
                
                */
}
