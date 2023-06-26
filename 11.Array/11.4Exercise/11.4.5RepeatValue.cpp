#include <iostream>
using namespace  std;

/*
 Give an array arr[] size of N. The task is to find the first repeating element in the array of
 integers, i.e. an element that occurs more than once and whose index of occurrence is smallest

 constraints
 1 <= N <= 10^6
 0 <= Ai <= 10^6

 input
 7
 1 5 3 4 3 5 6

 output
 2

 explanation
 5 is appearing twice and its first appearance is at index 2 which is less than 3 whose first
 occurring index is 3

 Base Idea
 To check if an element is repeating, we maintain an array idx[], which stores the first
 occurrence (index) of a particular element a[i]
 * initial the idx[] with -1, min idx with INT_MAX
 * keep updating idx[], while traversing the given array.

 */

int main(){

    return  0;
}


