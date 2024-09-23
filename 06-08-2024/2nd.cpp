// WAP to search an element ‘m’ in an array of size ‘n’ using binary search. Assume that the array is sorted.

#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int m)
{
    int left = 0, right = n - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (arr[mid] == m)
            return mid;
        else if (arr[mid] < m)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1; // Element not found
}

int main()
{
    int n, m;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the sorted elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> m;

    int result = binarySearch(arr, n, m);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
