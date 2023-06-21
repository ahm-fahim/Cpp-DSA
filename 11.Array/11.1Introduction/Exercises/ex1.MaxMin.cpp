#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arraySize;
    cin >> arraySize;

    int array[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        cin >> array[i];
    }

    cout << "\nArray = ";
    for (int i = 0; i < arraySize; i++)
    {
        cout << array[i] << " ";
    }

    // array max min
    int maxNo = INT_MIN; // imported from climits
    int minNo = INT_MAX;
    for (int i = 0; i < arraySize; i++)
    {
        // if (array[i] > maxNo)
        // {
        //     maxNo = array[i];
        // }
        // if(array[i]<minNo)
        // {
        //     minNo = array[i];
        // }

        // built in func
        maxNo = max(maxNo, array[i]);
        minNo = min(minNo, array[i]);
    }

    cout << "\n\nMax : " << maxNo << endl;
    cout << "\nMin : " << minNo << endl;

    return 0;
}