#include <iostream>
using namespace std;

struct student
{
    int roll_no,marks;
    char name[25];
};
 
int main()
{
    student S[100],t;
    int i,j,n;

    cout<<"Enter the no of students\n"; 
    cin>>n;

    cout<<"Enter student info as Name , Rollno. , marks\n";

    for(i=0;i<n;i++)
    {
        cin>>S[i].name>>S[i].roll_no>>S[i].marks;
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(S[j].marks<S[j+1].marks)
            {
                student t=S[j];
                S[j]=S[j+1];
                S[j+1]=t;
            }
        }
    }
    
    cout<<"\nStudent Names in Descending Order of marks :- \n";

    for(i=0;i<n;i++)
    {
       cout<<S[i].name<<endl;
    }
    return 0;
}