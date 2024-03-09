#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::cout << "Przykladowa forma zastosowania klasy\n"<<std::endl;
    
    std::vector<std::string> vect;

    std::string s1 = "test";
    std::string s2 = "test";
    std::string s3 = "test";
    std::string s4 = "test";
    std::string s5 = "test";

    vect.push_back(s1);
    vect.push_back(s2);
    vect.push_back(s3);
    vect.push_back(s4);
    vect.push_back(s5);

    std::cout << vect.size() << std::endl;

    for (int i = 0; i < vect.size(); i++)
        std::cout << vect.at(i) << std::endl;


    return 0;
}
