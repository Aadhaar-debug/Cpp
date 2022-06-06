#include<iostream>
using namespace std;

class input
{
    public:
        int a ;
        int b ;
        
        input()
        {
            a = 10;
            b = 20;
        }
        friend int ret_data();
};

class Mul : public input
{
    private:
        int c;
    public:
        int ret_data()
        {
            int c = a * b;
            cout << c;
        }
};

int main()
{
    input I;
    Mul M;
    M.ret_data();
    return 0;
    
}