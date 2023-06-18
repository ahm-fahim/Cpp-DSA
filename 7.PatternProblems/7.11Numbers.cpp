#include <iostream>
using namespace std;

int main()
{

    int num = 8;

    for (int row = 1; row <= num; row++)
    {
        for (int space = 1; space <= num - row; space++)
        {
            cout << " ";
        }

        for (int col = 1; col <= row; col++)
        {
            cout << col << " ";
        }

        cout << endl;
    }

    cout << endl;
    return 0;
}