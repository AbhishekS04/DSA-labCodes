// WAP to find a peak element which is not smaller than its neighbours.

// Eg: Input: array[]= {5, 10, 20, 15}
// // Output: 20

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

    int peakElement = arr[0];
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
        {
            peakElement = arr[i];
            break;
        }
    }

    cout << "Peak element: " << peakElement << endl;

    return 0;
}
