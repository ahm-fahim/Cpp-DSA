#include <iostream>
using namespace std;

/**
 * Bubble Sort Algorithm
 *
 * "Find The Minimum Element In The Unsorted Array
 *  And Swap It With The Element Of It Beginning.
 * "
 *
 *
 */

void bubbleSort(int arr[], int arrSize)
{
    int counter = 1;

    while (counter < arrSize)
    {

        for (int i = 0; i < arrSize - counter; i++)
        {

            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
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

    bubbleSort(array, arraySize);

    return 0;
}