#include <iostream>
using namespace std;
/*
Write a C++ program to count the string "aa" in a given string and assume "aaa" contains two "aa".
Sample Input:
"bbaaccaag"
"jjkiaaasew"
"JSaaakoiaa"
Sample Output:
2
2
3
*/
// Dec 15, 2023.
int aa_count(string,int);

int main()
{
    string word;
    cout<<"Word: ";
    cin>>word;
    int size = word.length();
    cout<<aa_count(word,size)<<endl;
}
int aa_count(string word, int size)
{
    int count = 0;
    for (int i = 0;i<size-1;i++)
    {
        if (word[i] == 'a' && word[i+1] == 'a')
            count ++;
    }
    return count;
}