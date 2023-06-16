#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    while (num > 0 && num < 20)
    {
        cout << num << endl;
        num++;
    }
    return 0;
}