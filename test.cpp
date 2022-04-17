#include<iostream>
using namespace std;

class student
{
    char name[20];
    int rollnumber;
    float marks;
public:
      void input()
      {
          cin >> name >> rollnumber >> marks;
      }
      void display()
      {
          cout << "Name: " << name << endl  << "Rollnumber: " << rollnumber << endl  << "Marks: " << marks << endl ;
      }
};
int main ()
{
    int n;
    cout << "Enter the number of students: " << endl;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        input();
    }
    for (int i = 0; i <= n; i++)
    {
        display();
    }
    return 0;

}

