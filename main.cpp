//A program that prints out a formatted version of an input name.
#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void input(string& name);
//Reads a line of text, consisting of person's name, into string variable name.

void format(string& name);
//Formats the the string value according to a predetermined format;
//last name, first name, middle initial.

void output(string& name);
//Prints out the string value in name in the following format:
//last name, first name, middle initial.

int main()
{
    string name;

    input(name);
    format(name);
    output(name);

    return 0;
}

void input(string& name)
{
    cout<<"\nEnter name: ";
    getline(cin, name);
    cout<<endl;
}

void format(string& name)
{
    char fullName[name.length()];
    strcpy(fullName, name.c_str());
    char *word = strtok(fullName, " ");
    char *nameParts[3];
    int i = 0;

    while (word != NULL)
    {
        nameParts[i] = new char [strlen(word) + 1];
        strcpy(nameParts[i], word);
        word = strtok(NULL, " ");
        i++;
    }

    if (i == 3 && strlen(nameParts[1]) > 2)
    {
        name = nameParts[2];
        name += ", ";
        name += nameParts[0]; 
        name += " ";
        name += nameParts[1][0];
        name += ".";
    }
    else if (i == 3 && strlen(nameParts[1]) == 2)
    {
        name = nameParts[2];
        name += ", ";
        name += nameParts[0]; 
        name += " ";
        name += nameParts[1];
    }
    else if (i == 3 && strlen(nameParts[1]) == 1)
    {
        name = nameParts[2];
        name += ", ";
        name += nameParts[0]; 
        name += " ";
        name += nameParts[1];
        name += ".";
    }
    else if (i == 2)
    {
        name = nameParts[1];
        name += ", ";
        name += nameParts[0]; 
    }
}

void output(string& name)
{
    cout<<"Formatted name: "<<name<<endl<<endl;
}
