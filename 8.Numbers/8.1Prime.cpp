#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;

    bool flag{};

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "Non Prime.\n";
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {

        cout << "Prime\n";
    }

    return 0;
}