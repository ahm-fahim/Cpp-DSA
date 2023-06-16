#include <iostream>
using namespace std;

int main()
{
    char button;
    cout << "Input a to e : ";
    cin >> button;

    switch (button)
    {
    case 'a':
        cout << "Apple\n";
        break;
    case 'b':
        cout << "Ball\n";
        break;
    case 'c':
        cout << "Cat\n";
        break;
    case 'd':
        cout << "Dog\n";
        break;
    case 'e':
        cout << "Egg\n";
        break;
    default:
        cout << "Not Found\n";
        break;
    }
}