#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int arr[t];

    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }

    int mn = arr[0];
    int mx[0];
    for (int i = 0; i <= t; i++)
    {
        if (arr[i] < arr[i + 1] && arr[i + 1] > arr[i + 2])
        {
            mx[i] = arr[i + 1];
        
        }
    }

    for (int i = 0; i < 2; i++)
    {
        cout << mx[i];
    }
}