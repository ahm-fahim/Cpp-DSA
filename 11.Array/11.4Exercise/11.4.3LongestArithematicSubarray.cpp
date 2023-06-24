#include <iostream>
using namespace std;

/*
    Longest Arithmetic sub array

    An arithmetic array is an array that contains at least two integers
    and the differences between consecutive integers are equal .
    For example [9,10] , [3, 3, 3] and [9,7,5, 3]
    are arithmetic arrays. while [1,3, 3, 7] ,[2,1,2] and [1,2 4]
    are not arithmetic arrays.

    Sarasvati has an array of N non-negative integers.
    The i-th intergers of the array is Ai.
    She wants to choose a contiguous arithmetic sub array
    from her array that has the maximum
    length. Please help her to determine the length of
    the longest contiguous arithmetic sub
    array.

    Input :
        the first line of the inputs gives the number of test case, T.T test case follow.
        Each test case begins with a line contains integers N. The second
        lines contains N integers. The i-th line integers is A.

    Output:
        For each test case, Output one line containing case #x: y where x
        is the test case number (starting from 1) and y is the length
        of the longest contiguous arithmetic sub array

    Constraints:
        time limit : 20 second per test set.
        memory limit :  1 GB,
        1 <= T <= 100
        0 <= A <= 10^9

        test set 1
        2 <= N <= 2000

        test set 2
        2 <= N <= 2 * 10^5 for at most 10 test cases

        for the remaining cases , 2 <= N <= 2000



*/

int main()
{

    int n;
    cin >> n; //7

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // 10 7 4 6 8 10 11
    }

    int ans = 1;
    int pd = arr[1] - arr[0];
    int j = 2;
    int curr = 2;

    while (j < n)
    {
        if (pd == arr[j] - arr[j - 1])
        {
            curr++;
        }
        else
        {
            pd = arr[j] - arr[j - 1];
            curr = 2;
        }
        ans = max(ans, curr);

        j++;
    }

    cout << ans << endl; //4
    return 0;
}