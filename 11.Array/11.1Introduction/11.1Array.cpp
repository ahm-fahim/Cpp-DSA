#include <iostream>
using namespace std;

int main()
{
    // dataType arrayName[array size] /[] = {array items}
    int arr[4] = {1, 2, 3, 4};
    cout << arr[2] << endl;

    int arraySize;
    cin >> arraySize;

    int arrays[arraySize];

    cout << "array value: ";
    for (int i = 0; i < arraySize; i++)
    {
        cin >> arrays[i];
    }

    for (int i = 0; i < arraySize; i++)
    {
        cout << arrays[i] << " ";
    }

    return 0;
}