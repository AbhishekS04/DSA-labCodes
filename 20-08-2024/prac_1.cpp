//! insertion sort in cpp

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 2, 4, 6, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        for (; j >= 0 && arr[j] > key; j--)
        {
            arr[j + 1] = arr[j];
        }

        arr[j + 1] = key;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

//! elplain the code
//! The code is an implementation of the insertion sort algorithm in C++.
//! The array to be sorted is {5, 2, 4, 6, 1, 3}.
//! The array is iterated over from the second element (index 1) to the last element.
//! For each element, the key is set to the value of the element.
//! The inner loop iterates over the elements to the left of the key element.
//! If the element is greater than the key, the element is shifted to the right.
//! The key is then inserted at the correct position in the array.
//! The sorted array is then printed to the console.
//! The output of the code is:
// Sorted array: 1 2 3 4 5 6

//? explain me the  algorithm

//? The insertion sort algorithm works by dividing the array into two parts: a sorted part and an unsorted part.
//? The sorted part initially contains the first element of the array, and the unsorted part contains the remaining elements.
//? The algorithm iterates over the unsorted part, one element at a time, and inserts each element into its correct position in the sorted part.
//? To insert an element into the sorted part, the algorithm compares the element with the elements in the sorted part from right to left.
//? If the element is smaller than the current element in the sorted part, the current element is shifted one position to the right.
//? This process continues until the correct position for the element is found, and the element is inserted at that position.
//? The algorithm repeats this process for each element in the unsorted part until the entire array is sorted.
//? The time complexity of the insertion sort algorithm is O(n^2) in the worst case, where n is the number of elements in the array.
//? The space complexity of the algorithm is O(1) as it does not require any additional space other than the input array.
