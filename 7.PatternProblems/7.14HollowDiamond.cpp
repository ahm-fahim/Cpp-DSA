#include <iostream>
using namespace std;

int main()
{
    int num = 10;

    for (int row = 1; row <= num - 2; row++)
    {

        for (int space = 1; space <= num - row; space++)
        {
            cout << "  ";
        }

        for (int col = 1; col <= 2 * row - 1; col++)
        {
            if (row == 1 || row == num || col == 1 || col == 2 * row - 1)
            {

                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    for (int row = num - 1; row >= 1; row--)
    {

        for (int space = 1; space <= num - row; space++)
        {
            cout << "  ";
        }

        for (int col = 1; col <= 2 * row - 1; col++)
        {
            if (row == 1 || row == num || col == 1 || col == 2 * row - 1)
            {

                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}