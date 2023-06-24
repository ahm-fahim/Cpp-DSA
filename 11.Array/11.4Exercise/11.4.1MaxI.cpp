#include <iostream>
using namespace std;

int main()
{
    int mx = -19999999;
    int n;

    cin >> n; // 5

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // 0 - 9 3 - 4 5
    }

    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
        cout << mx << endl;
    }

    return 0;
}