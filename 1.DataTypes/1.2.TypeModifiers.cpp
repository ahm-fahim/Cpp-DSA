#include <iostream>
using namespace std;

int main()
{
    // type modifier

    short int si;
    cout << "sort int size " << sizeof(si) <<endl;
    long int li;
    cout << "long int size " << sizeof(li) << endl;

    signed int sgi;
    cout << "signed int size " << sizeof(sgi) << endl;

    unsigned int usi;
    cout << "unsigned int size " << sizeof(usi) << endl;
}