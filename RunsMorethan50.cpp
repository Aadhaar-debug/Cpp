#include <iostream>
using namespace std;

struct player
{
    char name[20];
    int innings;
    int runsscored;
    int notouts;
};
int main()
{
    struct player P[50];
    int count;
    float avg[50];
    int i,n;
    cout<<"Enter the number of players"<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the player name"<<endl;
        cin>>P[i].name;
        cout<<"Enter the Number of innings played"<<endl;
        cin>>P[i].innings;
        cout<<"Enter the Number of runs Scored"<<endl;
        cin>>P[i].runsscored;
        cout<<"Enter the Number of times the player is not out"<<endl;
        cin>>P[i].notouts;

        for (int i = 0; i < n; i++)
        {
            avg[i]=(float) (P[i].runsscored) / (P[i].innings-P[i].notouts);
        }

        count = 0;
        for (int i = 0; i < n; i++)
        {
            if (avg[i]>50.0)
            {
                cout<<"Player with more than 50 is "<<P[i].name<<endl;
                count++;
            }
        }
        cout<<"Number of players with average more than 50 is "<<count;
        return 0;
    }
}