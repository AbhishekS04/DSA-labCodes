// Given an array of n elements that contains elements from 0 to n-1, with any of these numbers appearing any number of times. WAP to find these repeating numbers.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Repeating elements: ";
    for (int i = 0; i < n; i++)
    {
        if (arr[abs(arr[i])] >= 0)
        {
            arr[abs(arr[i])] = -arr[abs(arr[i])];
        }
        else
        {
            cout << abs(arr[i]) << " ";
        }
    }
    cout << endl;

    return 0;
}