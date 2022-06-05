#include <iostream>
using namespace std;

class student 
{
    public:
        char name[20];
        float marks;
        int rollnumber;

        void get_student_details()
        {
            cout<<"Enter the student's name , marks , rollnumber"<<endl;
            cin>>name;
            cin>>marks;
            cin>>rollnumber;
            cout<<endl<<endl;
        }
        void display_student_details()
        {
            cout<<endl<<endl<<"Student name : "<<name<<endl;
            cout<<"Student marks : "<<marks<<endl;
            cout<<"Student rollnumber : "<<rollnumber<<endl<<endl;
        }
        float marksreturn()
        {
            return marks;
        }

};

int main()
{
    student s[20];
    int stud_num;
    float temp_marks = 0.0;
    int loc;

    cout<<"How many students data do you want to enter ?"<<endl;
    cin>>stud_num;

    for (int  i = 1; i <= stud_num; i++)
    {
        s[i].get_student_details();
    }

    cout<<endl<<"-----------------------------------------------------"<<endl;
    cout<<endl<<endl<<"The student details captured till now are as follows"<<endl;

    for (int  j = 1; j <= stud_num; j++)
    {
        s[j].display_student_details();
    }

    cout<<endl<<"-----------------------------------------------------"<<endl;
    
    for (int  k = 1; k <= stud_num; k++)
    {
        if(temp_marks < s[k].marksreturn())
        {
            temp_marks = s[k].marksreturn();
            loc = k;
        }
    }
    cout<<s[loc].name<<" Has the highest marks";
    
    return 0;
}