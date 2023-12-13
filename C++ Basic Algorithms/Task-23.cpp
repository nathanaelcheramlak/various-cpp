#include <iostream>
using namespace std;

/*
Write a C++ program to create the string which is n (non-negative integer) copies of a given string.
Sample Input:
"JS", 2
"JS", 3
"JS", 1
Sample Output:
JSJS
JSJSJS
JS
*/
// Dec 13, 2023.
string string_multiplier(string,int);
int main()
{
    string word;
    int multiplier;
    cout<<"Enter word: ";
    cin>>word;
    cout<<"How many time do you want to multiply? ";
    cin>>multiplier;
    cout<<"Output = "<<string_multiplier(word,multiplier)<<endl;
}
string string_multiplier(string word,int n)
{
    string result;
    for (int i = 0;i<n;i++)
        result += word;
    return result;
}