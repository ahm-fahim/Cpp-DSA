#include <iostream>
using namespace std;

/*
    Sub Arrays

    array = {1, 2, 2}
    sub array = {1} {1,2} {1, 2, 2} {2} {2, 2} { 2 }
        sum   =  1    3       5      2    4      2

*/

int main()
{

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];

            cout << sum << " ";
        }
    }

    return 0;
}