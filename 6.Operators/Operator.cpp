#include <iostream>
using namespace std;

int main()
{
    /*Operator > Binary Operator + Unary Operator
     *             (+,-,*,/,%)       (-- , ++)
     *                        (increment , decrement)
     *                 (Preincrement ++a),(PostIncrement a++)
     *
     */

    // preincrement
    int num1 = 10;
    cout << "a " << num1 << endl;
    int num2 = ++num1;
    cout << "b " << num2 << endl;

    // postincrement
    int num3 = 20;
    cout << "c " << num3 << endl;
    int num4 = num3++;
    cout << "d " << num4 << endl;

    // relational operator

    /*
     *  !=
     *  ==
     *  >=
     *  <=
     *  <
     *  >
     */

    // Logical Operator
    /*
     * &&
     * ||
     * !
     *
     */

    int a = 10, b = 12;

    if (a != b && a > b)
    {
        cout << "A Greater.\n";
    }
    else if (a <= b)
    {
        cout << "B Greater.\n";
    }
    else
    {
        cout << "R kisu komuna! \n";
    }

    /**
     * Bitwise Operator
     * & and
     * | or
     * ! not
     * << left shift
     * >> Right shift
     * ~ ones complement
     * ^ Xor
     *
     */

    cout << "(0101 & 0110) " << (0101 & 0110) << endl;
    cout << "(0101 | 0110) " << (0101 | 0110) << endl;
    cout << "(0101 ^ 0110) " << (0101 ^ 0110) << endl;
    cout << "(!0101) " << (!0101) << endl;
    cout << "(~0110) " << (~0110) << endl;
    cout << "(4 << 1 = 4 *2^1) " << (4 << 1) << endl;
    cout << "(4 >> 1 = 4 / 2^1)" << (4 >> 1) << endl;

    /**
     * Assignment Operator
     * =
     * +=
     * -=
     * *=
     * /=
     */

    /*

    Miscellaneous Operator

    sizeof()
    condition ? a : b  (Ternary Operator)
    cast    (Convert Data to Another Type)
    comma (,)   
    & address
    * pointer

    */
}
