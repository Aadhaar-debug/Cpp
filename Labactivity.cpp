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
    void updatedata();
    void putnewdata();
    // void searchstudent();
};

class StudentCourse
{
private:
    string course;
    int credits;

public:
    
    void getdata();
    void putdata();
    StudentCourse(string course ,  int credits )
    {

    }
    void updatecourse();
    ~StudentCourse();
};

student :: student()
{
    cout << "Students details using constructior" << endl;
}
// 
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
// void StudentCourse :: updatecourse()
// {

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
    //s.searchstudent()
    s.updatedata();
    s.putnewdata();
    //Parameterized Constructor Overloading
    StudentCourse("Cyber" , 100);
    sc.updatecourse();

    return 0;
}
