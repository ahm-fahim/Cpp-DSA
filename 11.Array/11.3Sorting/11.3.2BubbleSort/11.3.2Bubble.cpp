#include <iostream>
using namespace std;

/**
 * Bubble Sort Algorithm
 *
 *  In the array compare 1st and 2nd value each other
 *
 *  if 1st > 2nd , then swap their index
 *  if 1st < 2nd , then not swap their index
 *
 *  after
 *
 *  if 2nd > 3rd , then swap their index
 *  if 2nd < 3rd , then not swap their index
 * 
 *  same process going on array first to last index 
 * 
 *
 * 
 *
 *
 */

void insertionSort(int arr[], int arrSize)
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

    insertionSort(array, arraySize);

    return 0;
}