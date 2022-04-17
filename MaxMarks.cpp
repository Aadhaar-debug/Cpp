#include<iostream>

using namespace std;

class student
{
    public:
        char name[20];
        int marks;
        int rollno;

        void input()
        {
            cin>>name>>rollno>>marks;
        }
        void display()
        {
            cout<<endl<<name<<endl;
        }
        float marksreturn()
        {
            return marks;
        }
};

int main()
{
    student S[10],temp;
    int i,j,n;

    cout<<"Enter the number of students whose data you want"<<endl;
    cin>>n;

    for (i = 0; i <= n-1; i++)
    {
        cout<<"Enter name,rollnumber,marks"<<endl;
        S[i].input();
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(S[j].marks<S[j+1].marks)
            {
                student temp=S[j];
                S[j]=S[j+1];
                S[j+1]=temp;
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