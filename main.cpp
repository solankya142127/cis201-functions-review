/* File Name: main.cpp
Description: 
Author: Ankur Solanky
Email: solankya142127@student.vvc.edu
Date Created: Tue Oct 16 18:38:46 PDT 2018
*/ 

#include<iostream>
#include<string> 

using namespace std;

int count_aA(string s)
 {
    int count = 0;
    for ( int i = 0; i < s.size(); i++)
    {
        char letter = tolower( s.at(i) );
        if(letter == 'a')
        {
            count++;
        }
    }
    return count;
 }


int main()
{
    string input;
    cout << "Please type in a string of letters: ";
    getline(cin, input);
    cout << "There are " << count_aA(input) << " letter a's in the string you typed." << endl;
    return 0;

}
