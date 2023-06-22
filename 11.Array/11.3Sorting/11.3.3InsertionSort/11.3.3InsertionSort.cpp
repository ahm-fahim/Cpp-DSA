#include <iostream>
using namespace std;

/**
 * Insertion Sort Algorithm
 * insert an element from unsorted array to its correct position
 * in the sorted array
 *
 *
 */

void insertionSort(int arr[], int arrSize)
{
    for (int i = 1; i < arrSize; i++)
    {

        int currentValue = arr[i];

        int j = i - 1;

        while (arr[j] > currentValue && j >= 0)
        {

            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = currentValue;
    }

    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arraySize;
    cin >> arraySize;

    int array[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        cin >> array[i];
    }

    insertionSort(array, arraySize);

    return 0;
}