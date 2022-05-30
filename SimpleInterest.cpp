//Simple Interest Program in C++ using Class
#include<iostream>
using namespace std;
class simple
{
    int a,p,n;
    float r,si;
public:
    void getvalues()
    {
        cout<<"Enter Principal amount\n";
        cin>>p;
        cout<<"Enter Number of Years\n";
        cin>>n;
        cout<<"Enter Rate of Interest\n";
        cin>>r;
    }
    void display_simple_interest()
    {
        si=(p*n*r)/100;
        cout<<"Simple Interest = "<<si<<endl;
    }
    void display_Amount()
    {
        a = si+p;
        cout<<"Amount = "<<a<<endl;
    }

};
int main()
{
    simple s;
    s.getvalues();
    s.display_simple_interest();
    s.display_Amount();
    return 0;
}