#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int savings;
    cout << "input your savings: ";
    cin >> savings;

    int budget;
    cout << "\ninput budget : ";
    cin >> budget;

    bool loan{true};
    bool getLoan;

    if (savings > budget)
    {
        cout << "I can Buy This Plot.\n";
    }
    else if (savings == budget)
    {

        cout << "Get Loan (1/0): ";
        cin >> getLoan;

        if (loan == getLoan)
        {
            cout << "I get loan . I brought this plot!\n";
        }
        else
        {
            cout << "I can buy but my savings gone be empty.\n";
        }
    }
    else
    {
        cout << "I can't Buy this plot\n";
    }
    return 0;
}
