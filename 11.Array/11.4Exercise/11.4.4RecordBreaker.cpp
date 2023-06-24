#include <iostream>
using namespace std;

/*
    Record breaker

    Isyana is given the number of visitors at her local theme park on
    N consecutive days .The number of visitors on the i-th day is V. A day is record braking
    if its satisfies both of the following conditions

   1. The number of the visitors on the day is strictly  larger then the 
   number of visitors on each of the previous days.

   2. Either it is the last day, or the number of visitors on the 
   day is strictly larger
   then the number of visitors on the following day.

   Note that very first day could be record breaking day!

   Please Help Isyana to find the record breaking day.


   Input :

   The first line of the input give the number of test case. T.T test cases follow. Each
   test case begins with a line containing the integer N. The second line contains the integers.
   The i-th line integers is V.

   Output :

   For each test case ,output one line containing case #x:y, where x is the test case number
   (starting from 1) and y is the number of record breaking days.

   Constraints:
   time limits : 20 seconds per test set
   memory limit : 1GB
   1<= T <= 100                                 // 1sec = 10^8 operations (approx)
   0 <= V <= 2 * 10^5                           // 20 sec = 2*10^9 operations (approx)

   Test set 1
   1 <= N <= 1000

   Test set 2
   1 <= N <= 2*10^5  for at most 10 test cases
   For the remaining cases , 1 <= N <=1000.


*/

int main()
{

    int n;
    cin >> n; 

    int arr[n + 1];
    arr[n] = -1;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; 
    }

    if (n == 1)
    {
        cout << "1" << endl;
        return 0;
    }

    int ans = 0;
    int mx = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mx && arr[i] > arr[i + 1])
        {
            ans++;
        }
        mx += max(mx, arr[i]);
    }

    cout << ans;

    return 0;
}