#include <iostream>
using namespace std;

int main()
{
    int num = 10;

    for (int i = 1; i <= num; i++)
    {
        for (int space = 1; space <= num - i; space++)
        {
            cout << "   ";
        }
        for (int j = 1; j <= num; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}