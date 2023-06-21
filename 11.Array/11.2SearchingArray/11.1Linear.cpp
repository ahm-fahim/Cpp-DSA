#include <iostream>
using namespace std;


// time complexity O(n)
int linearSearch(int arr[], int arrSize, int key)
{

    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
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

    int key;
    cin >> key;

    cout << linearSearch(array, arraySize, key) << endl;

    return 0;
}