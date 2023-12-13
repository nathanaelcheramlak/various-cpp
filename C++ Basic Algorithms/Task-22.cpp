#include <iostream>
using namespace std;

/*
Write a C++ program to check if two given non-negative integers have the same last digit.
Sample Input:
123, 456
12, 512
7, 87
12, 45
Sample Output:
0
1
1
0
*/
bool last_digit_checker(int, int);
int main()
{
    cout<<last_digit_checker(123,456)<<endl;
}
bool last_digit_checker(int num1, int num2)
{
    return num1%10 == num2%10;
}