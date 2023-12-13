#include <iostream>
using namespace std;
/*
Write a C++ program to compute the sum of two given integer values.
If the two values are the same, then return triple their sum.
Sample Input
1, 2
3, 2
2, 2
Sample Output:
3
5
12
*/

// Dec 13,2023.
int result(int num1,int num2);

int main()
{
    int num1, num2;
    cout<<"Enter Number 1: ";
    cin>>num1;
    cout<<"Enter Number 2: ";
    cin>>num2;
    cout<<"Result = "<<result(num1,num2)<<endl;
}
int result(int num1,int num2)
{
    if (num1 != num2)
        return num1+num2;
    else
        return 3*(num1+num2);
}