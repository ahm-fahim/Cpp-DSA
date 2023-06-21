#include <iostream>
using namespace std;

/**
 * Binary Search Algorithm
 *
 *
 * size = 5
 *            left          |          right
 *            start        mid          end
 * arr[size] = {1,    2,    3,     4,    5}
 *      index=  0  |  1  |  2   |  3  |  4
 *
 *
 * array must be sorted lower to upper
 *
 * start = 0;
 * end = size;
 *
 *          0      4
 * mid = (start + end) / 2;
 *
 * find_num = 2
 *
 * if find_num > mid = mid+1 (go right)
 * if find_num < mid = mid-1 (go left)
 *
 * when find_num == mid (this is the exact value,which you searching);
 *
 *
 */

/**
 *  Time complexity
 *
 *  1st iteration length of array  = n
 *  2nd   "         "    "    "    = n/2
 *  3rd   "         "    "    "    = (n/2)/2
 *  k   "         "    "    "      = (n/2^k)
 *  
 * Given that,
 * 
 *      n/2^k       = 1
 *      n           = 2^k
 *      log2 (n)    = log2 (2^k)
 *      log2 (n)    = K log2  2   // log2 2 = 1
 *      k           = log2 n
 * 
 *      complexity = O(log2 n)
 *
 */
int binarySearch(int arr[], int arrSize, int key)
{

    int start = 0;
    int end = arrSize;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return -1;
}

int main()
{

    int arraySize;
    cin >> arraySize;

    int array[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        cin >> array[i];
    }

    int key;
    cin >> key;

    cout << binarySearch(array, arraySize, key) << endl;

    return 0;
}