#include <iostream>
using namespace std;

int main()
{
    float num1, num2;

    cout << "Input 2 numbers: ";
    cin >> num1 >> num2;

    char operation;
    cout << "Which type of Operation You Want(+,-,/,*) : ";
    cin >> operation;

    switch (operation)
    {
    case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '/':
        cout << num1 / num2;
        break;
    case '*':
        cout << num1 * num2;
        break;
    default:
        cout << "No Operation Found\n";
        break;
    }

    return 0;
}