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
    int i,n,loc,temp,a;
    float marks1;
    cout<<"Enter the number of students"<<endl;
    cin>>n;

    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter the name,rollnumber,marks of student "<<i+1<<endl;
        cin>>S[i].name>>S[i].rollnumber>>S[i].marks;
    }
    marks1 = 0.0;
    loc = 0;

    for (int i = 0; i < n; i++)
    {
        if (S[i].marks>marks1)
        {
            loc=i;
            marks1=S[i].marks;       
        }
        
    }

    cout<<endl<<"The name of the student with maximum marks is "<<S[loc].name<<endl;

}