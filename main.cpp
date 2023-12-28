#include <iostream>
using namespace std;

int *accept();
int keno(int computer_store[], int user_choices[],int bet);
int  *lucky();
bool search(int *given_array, int size, int target);
int randy(int k = 0);
bool range_checker(int num);
bool quantity_checker(int q);
bool amount_checker(int a);
int intersection(int *computer_store, int *user_choices);
void display_computer(int *computer_store);

int quantity,bet; 

int main()
{
    int *user_choices = accept();
    int *computer_store = lucky();
    double winning = keno(computer_store,user_choices,bet);
    display_computer(computer_store);
    cout<<"Winnings: "<<winning<<endl;
    delete[] user_choices, computer_store;
}
int *accept()
{
    int quantity;
    cout<<"Amount you want to bet, min(10): ";
    cin>>bet;

    while (amount_checker(bet))
    {
        cout<<"Amount must be 10 or greater. Enter again: ";
        cin>>bet;
    }

    cout<<"How many numbers do you want to bet? ";
    cin>>quantity;

    while (quantity_checker(quantity))
    {
        cout<<"Incorrect Quantity! Enter again: ";
        cin>>quantity;
    }

    int *user_choices = new int[quantity];
    for (int i = 0;i < quantity;i++)
    {
        int num;
        cout<<"> ";
        cin>>num;
        while (search(user_choices,quantity,num) || range_checker(num))
        {
            cout<<"Again! > ";
            cin>>num;
        }
        user_choices[i] = num;
    }
    return user_choices;
}

int * lucky()
{
    int *computer_store = new int [20];
    for (int i = 0;i<20;i++)
    {
        computer_store[i] = randy();
        for (int j = 0;j<20;j++)
        {
            if (search(computer_store, 20,randy()))
            {
                computer_store[i] = randy(j + i + 1);
            }
        }
    }
    return computer_store;
}

int keno(int *computer_store, int *user_choices,int bet)
{
    double winning;
    if (quantity == 1 && intersection(computer_store,user_choices) == 1)
    {
        winning = bet * 3.8;
    }
    else if (quantity == 2 && intersection(computer_store,user_choices) == 2)
    {
        winning = bet * 15;
    }
    else if (quantity == 3 && intersection(computer_store,user_choices) == 3)
    {
        winning = bet * 35;
    }
    else if (quantity == 3 && intersection(computer_store,user_choices) == 2)
    {
        winning = bet * 3;
    }
    else if (quantity == 4 && intersection(computer_store,user_choices) == 4)
    {
        winning = bet * 100;
    }
    else if (quantity == 4 && intersection(computer_store,user_choices) == 3)
    {
        winning = bet * 25;
    }
    else if (quantity == 5 && intersection(computer_store,user_choices) == 5)
    {
        winning = bet * 300;
    }
    else if (quantity == 5 && intersection(computer_store,user_choices) == 4)
    {
        winning = bet * 70;
    }
    else
    {
        winning = 0;
    }
    return winning;
}

bool search(int *computer_store,int size, int target) // Checks if the generated random number is in the list.
{
    bool a;
    for (int i = 0;i<20;i++)
    {
        if (target != *(computer_store + i))
            a = false;
        else
        {
            a = true;
            break;
        }
    }
    return a;
}

bool range_checker(int num)
{
    if (num >= 1 && num <= 80)
        return false;
    return true;
}

int randy(int k) // Generates random number
{
    srand(time(NULL) + k);
    int n = (rand()%79)+1;
    return n;
}

bool quantity_checker(int q)
{
    if (q >= 1 && q <= 5)
        return false;
    return true;
}

int intersection(int *computer_store, int *user_choices)
{
    int counter =0;
    for (int i = 0;i<quantity;i++)
    {
        if (search(computer_store,20,user_choices[i]))
            counter ++;
    }
    return counter;
}

void display_computer(int *computer_store)
{
    cout<<"--------------------------------------\n";
    for (int i = 0;i<20;i++)
    {
        cout<<"| "<<computer_store[i]<<"\t";
        if ((i+1) % 5 == 0)
            cout<<endl;
    }
    cout<<"--------------------------------------\n";
}

bool amount_checker(int a)
{
    if (a >= 10)
        return false;
    return true;
}