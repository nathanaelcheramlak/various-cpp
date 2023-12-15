#include <iostream>
using namespace std;

// Converts Binary to Decimal.
// Dec 16, 2023.

int binary_to_dec(string, int);
int main()
{
    string binary;
    cout<<"Enter Binary: ";
    cin>>binary;
    cout<<binary<<" in Decimal = "<<binary_to_dec(binary,binary.length())<<endl;
}
int binary_to_dec(string binary, int size)
{
    int dec = 0;
    for (int i = size-1,j=1;i >=0;i--,j*=2)
    {
        dec += ((int) binary[i] - 48) * j; // Substract 48 to convert from ASCII.
    }
    return dec;
}
