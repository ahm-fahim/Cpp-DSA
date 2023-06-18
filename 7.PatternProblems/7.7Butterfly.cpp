#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    // top
    for (int i = 1; i <= num; i++)
    { // row

        // first triangle
        for (int j = 1; j <= i; j++)
        { // col
            cout << "* ";
        }
        int space = 2 * num - 2 * i;
        for (int k = 1; k <= space; k++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= i; j++)
        { // col
            cout << "* ";
        }
        cout << endl;
    }

    // bottom
    for (int i = num; i >= 1; i--)
    { // row

        // first triangle
        for (int j = 1; j <= i; j++)
        { // col
            cout << "* ";
        }
        int space = 2 * num - 2 * i;
        for (int k = 1; k <= space; k++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= i; j++)
        { // col
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}