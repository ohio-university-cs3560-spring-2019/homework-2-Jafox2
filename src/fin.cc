#include <functions.h>

std::list<std::string> file_input(std::string in_word, std::string out_word)
{
std::string tmp;
std::list<std::string> words;

        while (!std::cin.eof())
        {
            if (std::cin.peek() == '\n')        //places the word "return" in the list instead of a \n character
            {
            tmp = "return";
            std::cin.ignore();
            }

            else if (std::cin.peek() == ' ')    //places the word "space" in the list instead of just a blank space
            {
            tmp = "space";
            std::cin.ignore();
            }

            else
            std::cin >> tmp;

            if ( (in_word != out_word) && (tmp == in_word) )       //this is the word in file1 that will be changed in file2
                {
                tmp = out_word;
                }

            words.push_back(tmp);
        }
        return words;

}
