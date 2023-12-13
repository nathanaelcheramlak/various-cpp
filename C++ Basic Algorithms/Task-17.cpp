#include <iostream>
using namespace std;

/*
Write a C++ program to check the largest number among three given integers.
Sample Input:
1,2,3
1,3,2
1,1,1
1,2,2
Sample Output:
3
3
1
2
*/

// Dec 13, 2023.

template <typename N>
N largest(N x,N y,N z)
{
    return max(x,max(y,z));
}
int main()
{
    cout<<"The largest is "<<largest(2,5,4)<<endl;
}
