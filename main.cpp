#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool search(int store[20], int size, int target);

int randy(int k = 0);

void display(int list[20])
{
    for (int i = 0;i<20;i++)
    {
        cout<<list[i]<<endl;
    }
}

int main()
{
    int computer_store[20];
    for (int i = 0;i<20;i++)
    {
        computer_store[i] = randy();
        for (int j = 0;j<20;j++)
        {
            if (search(computer_store,20, randy()))
            {
                computer_store[i] = randy(j + i + 1);
            }
        }
    }

    display(computer_store);
}


bool search(int store[20],int size, int target)
{
    bool a;
    for (int i = 0;i<size;i++)
    {
        if (target != store[i])
            a = false;
        else
        {
            a = true;
            break;
        }
    }
    return a;
}

int randy(int k){
    srand(time(NULL) + k);
    int n = (rand()%79)+1;
    return n;
}