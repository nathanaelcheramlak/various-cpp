#include <iostream>
using namespace std;

void rps_game(char choice,int score);


char choice;
int winning_score;

int main()
{
    cout<<"**********************************\n";
    cout<<"Welcome to Rock Paper Scissor Game\n";
    cout<<"**********************************\n";
    cout<<"What should be the winning score? ";
    cin>>winning_score;
    rps_game(' ',winning_score);
}

void rps_game(char choice, int score)
{
    int user_score = 0, computer_score = 0;
    char game[] = {'r','p','s'};

    while (user_score != score && computer_score != score)
    {
    cout<<"\tr - rock\n\tp - paper\n\ts - scissor\nChoice: ";
    cin>>choice;

    srand(time(NULL));
    int computer = (rand()%3);
    char computer_choice = game[computer];

    if (choice == 'r' && computer_choice == 'r')
        cout<<"Draw\n";
    else if (choice == 'p' && computer_choice == 'p')
        cout<<"Draw\n";
    else if (choice == 's' && computer_choice == 's')
        cout<<"Draw\n";
    else if (choice == 'r' && computer_choice == 's')
    {
        cout<<"Comp: "<<computer_score<<endl;
        cout<<"User: "<<++user_score<<endl;
    }
    else if (choice == 's' && computer_choice == 'p')
    {
        cout<<"Comp: "<<computer_score<<endl;
        cout<<"User: "<<++user_score<<endl;
    }
    else if (choice == 'p' && computer_choice == 'r')
    {
        cout<<"Comp: "<<computer_score<<endl;
        cout<<"User: "<<++user_score<<endl;
    }
    else if (choice == 'r' && computer_choice == 'p')
    {
        cout<<"User: "<<user_score<<endl;
        cout<<"Comp: "<<++computer_score<<endl;
    }
    else if (choice == 's' && computer_choice == 'r')
    {
        cout<<"User: "<<user_score<<endl;
        cout<<"Comp: "<<++computer_score<<endl;
    }
    else if (choice == 'p' && computer_choice == 's')
    {
        cout<<"User: "<<user_score<<endl;
        cout<<"Comp: "<<++computer_score<<endl;
    }
    else
        cout<<"Try again!\n";
    cout<<"Computer Choice: "<<computer_choice<<endl;
    }
    
    if (computer_score > user_score)
    {
        cout<<"Your score was "<<user_score<<" the computer had a score of "<<computer_score<<endl;
        cout<<"You Lost!"<<endl;
    }
        
    else
    {
        cout<<"Your score was "<<user_score<<" the computer had a score of "<<computer_score<<endl;
        cout<<"You won!"<<endl;
    }
}