#include "functions.h"

void file_output(std::list<std::string> words)
{
        std::list<std::string>::iterator it = words.begin();
        while (it != words.end())
            {
                if (*it == "return") {std::cout << "\n";}
                else if (*it == "space") {std::cout << " ";}
                else std::cout << *it;
            it++;
            }
}
