//By Aadhaar Koul
//Rollnumber 2020a1r040
//Section A1
#include <iostream>
using namespace std;
class student
{

public:
    int rollno;
    string name;
    float marks;
    student();
    ~student();
    void getdata();
    void putdata();
    //void searchstudent();
    void updatedata();
    void putnewdata();
};

class StudentCourse
{
private:
    string course;
    int credits;

public:
    StudentCourse();
    ~StudentCourse();
    void getdata();
    void putdata();
};

StudentCourse::StudentCourse()
{
    cout << "Course Details Using Constructor" << endl;
}
student ::student()
{
    cout << "Students details using constructior" << endl;
}

void StudentCourse ::getdata()
{
    cout << "Enter Course Name: ";
    cin >> course;
    cout << "Enter Credits: ";
    cin >> credits;
}

void student ::getdata()
{
    cout << "Enter the rollno:";
    cin >> rollno;
    cout << "Enter the name:";
    cin >> name;
    cout << "Enter the marks:";
    cin >> marks;
}
void StudentCourse ::putdata()
{
    cout << "Course Name: " << course << endl;
    cout << "Credits: " << credits << endl;
}
void student ::putdata()
{
    cout << "Rollno:" << rollno << endl;
    cout << "Name:" << name << endl;
    cout << "Marks:" << marks << endl;
}
void student::updatedata()
{
    rollno = 20;
    name = "Bill";
    marks = 100;
}
void student::putnewdata()
{
    cout<<"Updated Data"<<endl;
    cout << "Rollno:" << rollno << endl;
    cout << "Name:" << name << endl;
    cout << "Marks:" << marks << endl;
    cout << endl << endl;
    cout<<"Student data deleted using a Member function"<<endl;
}
// void student :: searchstudent()
// {
//     //cout<<"Enter the rollnumber of the student to get the details"<<endl;
//     int stud = 1;
//     cout<<"Student Details"<<endl;
//     cout << "Rollno:" << s[stud].rollno << endl;
//     cout << "Name:" << s[stud].name << endl;
//     cout << "Marks:" << s[stud].marks << endl;
//     cout << endl << endl;

// }
student ::~student()
{
    delete this;
}

StudentCourse ::~StudentCourse()
{
    delete this;
}


int main()
{
    student s;
    StudentCourse sc;
    cout << "COURSE DETAILS" << endl;
    sc.getdata();
    cout << endl;
    cout << "STUDENTS DETAILS" << endl;
    s.getdata();
    cout << endl;
    s.putdata();
    cout << endl;
    // for (int  i = 0; i < 3; i++)
    // {
    //     cout << "STUDENTS DETAILS" << endl;
    //     s[i].getdata();
    //     cout << endl;
    //     s[i].putdata();
    //     cout << endl;
    // }
    
    s.updatedata();
    s.putnewdata();

    return 0;
}