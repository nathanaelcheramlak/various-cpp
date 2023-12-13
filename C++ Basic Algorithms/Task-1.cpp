#include <iostream>
using namespace std;

/*
Write a C++ program to find the absolute difference between n and 51.
If n is greater than 51 return triple the absolute difference.
Sample Input:
53
30
51
Sample Output:
6
21
0
*/

// Dec 13,2023.
int result(int num1,int num2);

int main()
{
    int num1, num2 = 51;
    cout<<"Enter Number: ";
    cin>>num1;
    cout<<"Result = "<<result(num1,num2)<<endl;
}

int result(int num1,int num2)
{
    if (num1 <= num2)
        return num2-num1;
    else
        return 3*(num1-num2);
}
