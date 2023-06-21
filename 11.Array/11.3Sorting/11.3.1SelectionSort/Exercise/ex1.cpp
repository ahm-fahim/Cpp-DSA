#include <iostream>
using namespace std;

int main()
{
    int chocolate = 15;
    int wrapper = chocolate;

    int sum = 0;
    sum += chocolate;

    int newChocolate = 0;

    while (wrapper > 2)
    {
        newChocolate = wrapper / 3;

        int reminder = wrapper % 3;

        wrapper = newChocolate;

        sum += newChocolate;
        if (reminder != 0)
        {
            wrapper += reminder;
        }
    }

    cout << sum;

    return 0;
}