#include <iostream>
using namespace std;

/*
Write a C++ program to check two given integers. Each integer is in the range 10..99. Return true if a digit appears in both numbers, such as the 3 in 13 and 33.
Sample Input:
11, 21
11, 20
10, 10
Sample Output:
1
0
1
*/
// Dec 15, 2023.
int digit_check(int, int);
int main()
{
    cout<<digit_check(243,45)<<endl;
}
int digit_check(int x, int y)
{
    string X = to_string(x); // Very Useful
    string Y = to_string(y);
    for (int i = 0;i<X.length();i++)
    {
        for (int j = 0;j<Y.length();j++)
        {
            if (X[i] == Y[j])
                return 1;
        }
    }
    return 0;
}
