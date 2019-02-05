//*******************************************************************
//
// hw1main.cc
//
// Program: Homework 1
//
// Author: James Fox
// Email: JF268518@ohio.edu
//
// Date: 28 January 2019
//
//*******************************************************************

#include <iostream>
#include <list>
#include <string>

#include "functions.h"

int main(int argc, char* argv[])
{
std::list <std::string> words;
std::string input = argv[1];       //this is the word to be changed
std::string output = argv[2];      //this is the changed word in the output file

//************************** FILE INPUT ***************************

if(!std::cin.fail())
    {
    words = file_input(input, output);
    }

//*************** OUTPUT TO FILE *********

file_output(words);

return 0;
}
