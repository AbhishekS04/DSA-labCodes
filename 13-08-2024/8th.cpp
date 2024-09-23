//! WAP to find the number of characters in a string.

#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    cout << "The number of characters in the string is: " << count;
    return 0;
}
