#include<iostream>
using namespace std;

class space 
{
    private:
        int x;
        int y;
        int z;
    public:
        void getdata(int a , int b , int c);
        void display(void);
        void operator-();                      //overload unary minus function prototype
};

void space :: getdata(int a , int b , int c)
{
    x = a;
    y = b;
    z = c;
}
void space :: display(void)
{
    cout<<" x = "<<x;
    cout<<" y = "<<y;
    cout<<" z = "<<z;
}
void space :: operator-()
{
    x = -x;
    y = -y;
    z = -z;
}

int main()
{
    space S;
    S.getdata(10 , -20 , 30);
    cout<<"S : ";
    S.display();

    -S;          //Activating the operator function

    cout<<"S : ";
    S.display();
    return 0;
}