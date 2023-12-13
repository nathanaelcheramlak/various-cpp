#include <iostream>
using namespace std;

/*
17. Write a C++ program to check if the string 'yt' appears at index 1 in a given string.
If it appears return a string without 'yt' otherwise return the original string.
Sample Input:
"Python"
"ytade"
"jsues"
Sample Output:
Phon
ytade
jsues
*/

//Dec 13,2023.
string yt_checker(string,int);
int main()
{
    string w;
    int size;
    cout<<"Word: ";
    cin>>w;
    size = w.length();
    cout<<yt_checker(w,size)<<endl;
}

string yt_checker(string word, int size)
{
    if (word[1] == 'y' && word[2] == 't')
        return word.erase(1,3);
    else
        return word;
}