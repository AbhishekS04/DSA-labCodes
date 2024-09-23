// Given an array of integers arr[], The task is to find the index of first repeating element in it i.e. the element that occurs more than once and whose index of the first occurrence is the smallest. WAP for the same.

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

    int minIndex = n;
    int minElement = -1;
    int lastIndex[n];
    for (int i = 0; i < n; i++)
    {
        lastIndex[i] = -1;
    }

    for (int i = 0; i < n; i++)
    {
        if (lastIndex[arr[i]] != -1)
        {
            if (lastIndex[arr[i]] < minIndex)
            {
                minIndex = lastIndex[arr[i]];
                minElement = arr[i];
            }
        }
        else
        {
            lastIndex[arr[i]] = i;
        }
    }

    if (minElement == -1)
    {
        cout << "No repeating element found\n";
    }
    else
    {
        cout << "First repeating element: " << minElement << " at index " << minIndex << endl;
    }

    return 0;
}
