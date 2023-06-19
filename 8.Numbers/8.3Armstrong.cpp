#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum{};
    int originalN = n;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum += pow(lastDigit, 3);
        n = n / 10;
    }
    if (sum == originalN)
    {

        cout << "Armstrong\n";
    }
    else
    {
        cout << "Not Armstrong\n";
    }

    return 0;
}