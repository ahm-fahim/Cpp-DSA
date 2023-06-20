#include <iostream>
using namespace std;

bool check(int x, int y, int z)
{
    int a = max(x, max(y, z));

    int b, c;

    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }

    bool result = (a * a == b * b + c * c) ? true : false;

    return result;
}

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    if (check(x, y, z))
    {
        cout << "Pythagorean Triplet\n";
    }
    else
    {
        cout << "Not Pythagorean Triplet\n";
    }

    return 0;
}