// ! WAP to insert an element at the nth position of an array.

#include <iostream>
using namespace std;

int main()
{
    int n, element, pos;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n + 1];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter the element to be inserted: ";
    cin >> element;
    cout << "Enter the position to insert: ";
    cin >> pos;

    for (int i = n; i > pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = element;

    cout << "The array after inserting the element is: ";
    for (int i = 0; i <= n; i++)
        cout << arr[i] << " ";

    return 0;
}
