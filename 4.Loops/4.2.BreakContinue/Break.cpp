#include <iostream>
using namespace std;

int main()
{
    int amount{100};

    for (int date = 1; date <= 30; date++)
    {
        if (date % 2 == 0)
        {
            continue; // skip to next iteration of the loops
        }
        if (amount == 0)
        {
            break; // terminate the loop
        }
        cout << "Today Is " << date << " April, 2023\n";
        amount = amount - 10;
    }

    return 0;
}
