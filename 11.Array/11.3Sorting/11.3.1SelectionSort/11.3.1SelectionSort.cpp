#include <iostream>
using namespace std;

/**
 * Selection Sort Algorithm
 *
 * "Find The Minimum Element In The Unsorted Array
 *  And Swap It With The Element Of It Beginning.
 * "
 *
 *
 */

void selectionSort(int arr[], int arrSize)
{

    for (int i = 0; i < arrSize - 1; i++)
    {
        for (int j = i + 1; j < arrSize; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
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

    selectionSort(array, arraySize);

    return 0;
}