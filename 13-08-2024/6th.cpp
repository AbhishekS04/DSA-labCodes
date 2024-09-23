//! WAP to delete the nth element of an array.

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
    int element;
    cout << "Enter the element to be deleted: ";
    cin >> element;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        cout << "Element not found in the array.";
    }
    else
    {
        for (int i = index; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        cout << "The array after deleting the element is: ";
        for (int i = 0; i < n - 1; i++)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}
