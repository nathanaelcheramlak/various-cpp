#include <iostream>
using namespace std;

/*
Write a C++ program to create another string made of every other character starting with the first from a given string.
Sample Input:
"Python"
"PHP"
"JS"
Sample Output:
Pto
PP
J
*/
// Dec 15, 2023.
string even_only(string, int);

int main()
{
    string word;
    cout<<"Word: ";
    cin>>word;
    int size = word.length();
    cout<<even_only(word,size)<<endl;
}
string even_only(string word, int size)
{
    string word2;
    for (int i = 0;i < size;i++)
    {
        if (i % 2 == 0)
            word2 += word[i];
    }
    return word2;
}