#include <iostream>
using namespace std;

int main()
{
    int num; // 5 = 1+2+3+4+5 = 15
    cin >> num;

    int sum{};

    for (int count = 1; count <= num; count++)
    {
        sum += count;
    }
    cout << sum;

    return 0;
}