#include <iostream>
using namespace std;

class strings
{
    public:
        string fname = "John";
        string lname = "Kennedy";
};


class second : public strings 
{
    public:
        string midname = "F";
};

class third : public second
{
    public:
        void display_name(third a)
        {
            cout<<a.fname<<a.midname<<a.lname<<endl;
        }
};



int main()
{
    third a;
    a.display_name(a);
    return 0;

}