// WAP to search an element ‘m’ in an array of size ‘n’ using linear search.
// dont use function make it very easy

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to be searched: ";
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == m)
        {
            cout << "Element found at index " << i << "\n";
            return 0;
        }
    }
    cout << "Element not found\n";
    return 0;
}
