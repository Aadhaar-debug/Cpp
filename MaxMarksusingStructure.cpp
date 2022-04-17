#include <iostream>
using namespace std;

struct student
{
    char name[20];
    int rollnumber;
    float marks;
};

int main ()
{
    student S[100];
    int i,n,loc;
    float marks1;
    cout<<"Enter the number of students"<<endl;
    cin>>n;

    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter the number of students"<<i+1<<endl;
        cin>>S[i].name>>S[i].rollnumber>>S[i].marks;
    }
    marks1 = 0.0;
    loc = 0;

    for (int i = 0; i < n; i++)
    {
        if (S[i].marks>marks1)
        {
            loc=1;
            marks1=S[i].marks;       
        }
        cout<<"The name of the student with maximum marks is "<<S[loc].name<<endl;
        return 0;        
    }
    
    
}