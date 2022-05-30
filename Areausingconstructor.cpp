#include<iostream>
using namespace std;

class Area
{
    private:
        int length;
        int breadth;
    public:
        Area();
        ~Area();
};
 Area :: Area()
{
    length = 10;
    breadth = 20;
    cout<<"The area of Rectangle is = "<<endl;
    cout<<length*breadth;
}
Area :: ~Area()
{

    delete this;
}
int main()
{
    Area a;
    return 0;
}
