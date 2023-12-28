#include <iostream>
using namespace std;

// Digital Root Calculator

/*
    Digital Root is Digital Root is the single number obtained by adding the number successively.
    E.g. Digital Root of 347 = 3 + 4 + 7 = 14, 14 = 1 + 4 = 5.
    Thus, 5 is a single digit number, which is the digital root of 347.

    Sample Input and Output
    digital_root(144) = 9
    digital_root(158) = 5
    digital_root(1243) = 1
*/

int digital_root(int num);
int main()
{
    int num;
    cout<<"Enter Number: ";
    cin>>num;
    cout<<digital_root(num)<<endl;
}

int digital_root(int num)
{
    if (num < 10)
        return num;
    else
    {
        int temp = 0;
        while (num != 0)
        {
            temp += num % 10;
            num /= 10;
        }
        return digital_root(temp);
    }   
}
