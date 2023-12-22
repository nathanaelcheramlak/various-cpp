#include <iostream>
using namespace std;

/*
Write a C++ program to check if it is possible to add two integers to get the third integer from three given integers.
Sample Input:
1, 2, 3
4, 5, 6
-1, 1, 0
Sample Output:
1
0
1
*/
// Dec 15, 2023.

int third(int,int,int);
int main()
{
    cout<<third(-1,1,0)<<endl;
}
int third(int x,int y, int z)
{
    if (x-y == z || y-x == z || z-y == x)
        return 1;
    return 0;
}