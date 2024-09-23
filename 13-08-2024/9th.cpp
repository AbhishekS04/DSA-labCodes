//! WAP to reverse a string.

#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    string revStr = "";
    for (int i = str.length() - 1; i >= 0; i--)
    {
        revStr += str[i];
    }
    cout << "The reversed string is: " << revStr;
    return 0;
}