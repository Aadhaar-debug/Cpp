#include<iostream>
using namespace std;
// Program starts

class number
{
    private:
        int  a = 50;
        int  b = 30;
    public:
        friend int try_access_private_data(number b);
        friend int access_private_data(number c);
};
int try_access_private_data(number b)
{
    cout<< b.a + b.b <<endl;
}
int access_private_data(number c)
{
    cout<<c.a+c.b<<endl;
}


int main()
{
    number z;
    try_access_private_data(z);
    access_private_data(z);
    return 0;
}
