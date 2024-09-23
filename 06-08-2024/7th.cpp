// WAP to find the Union and Intersection of two sorted arrays. Both the arrays are entered by the user.

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the size of the first array: ";
    cin >> n;

    int arr1[n];
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> m;

    int arr2[m];
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    cout << "Union: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    for (int i = 0; i < m; i++)
    {
        bool found = false;
        for (int j = 0; j < n; j++)
        {
            if (arr2[i] == arr1[j])
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << arr2[i] << " ";
        }
    }
    cout << endl;

    cout << "Intersection: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
    cout << endl;

    return 0;
}
