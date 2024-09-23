// ! WAP to delete the last element of an array.

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
    int newSize = n - 1;
    int newArr[newSize];
    for (int i = 0; i < newSize; i++)
    {
        newArr[i] = arr[i];
    }
    cout << "The array after deleting the element is: ";
    for (int i = 0; i < newSize; i++)
    {
        cout << newArr[i] << " ";
    }
    return 0;
}