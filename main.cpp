#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::cout << "Przykladowa forma zastosowania klasy\n"<<std::endl;
    
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
        
    return 0;
}
