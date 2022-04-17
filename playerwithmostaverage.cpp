#include <iostream>
using namespace std;

struct player
{
    
    char name[15];
    int score;
    int innings;
    int alive;
    float avg;
};
void input(player *P , int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Enter name-score-innings-not out"<<endl;
        cin>>P[i].name>>P[i].score>>P[i].innings>>P[i].alive;
        if(P[i].alive>P[i].innings)
        {
            cout<<"Impossible";
            P[i].avg=0;
        }
        else
        {
            P[i].avg=(float)P[i].score / (P[i].innings-P[i].alive);
        }
    }
}
void display (player *P,int n)
{
    for(int i=0;i<n;i++)
    {
        if(P[i].avg>50)
        {
            cout<<P[i].name<<"With average"<<P[i].avg;
        }
        else
        {
            cout<<"Below Average"<<P[i].avg<<endl;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the number of players range = undr 10"<<endl;
    cin>>n;
    player P[10];
    input(P,n);
    display(P,n);
    return 0;
}