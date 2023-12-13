#include <iostream>
using namespace std;

/*Write a C++ program to check two given integers, and return true if one of them is 30 or if their sum is 30.
Sample Input:
30, 0
25, 5
20, 30
20, 25
Sample Output:
1
1
1
0
*/

// Dec 13, 2023.
int result(int num1,int num2);
int main()
{
    int num1, num2;
    cout<<"Enter Number 1: ";
    cin>>num1;
    cout<<"Enter Number 2: ";
    cin>>num2;
    cout<<result(num1,num2)<<endl;
}

int result(int num1,int num2)
{
    if (num1 == 30 || num2 == 30 || num2+num1 == 30)
        return 1;
    else
        return 0;
}