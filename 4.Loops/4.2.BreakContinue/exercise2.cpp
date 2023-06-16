#include <iostream>
using namespace std;

int main()
{

    // prime number or not
    int num;
    cin >> num;

    int i;

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << "Not a Prime Number\n";
            break;
        }
    }
    if (i == num)
    {
        cout << "Prime Number\n";
    }

    return 0;
}