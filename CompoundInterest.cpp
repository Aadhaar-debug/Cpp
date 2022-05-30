#include<iostream>
#include<math.h>

using namespace std;

class Interest
{
    float interest,amount,principal,rate,time;

    public:
        void getData(float p, float r,float t,float am)
        {
            amount = am;
            principal=p;
            rate=r;
            time=t;
        }
        float calculateInterest()
        {
            interest = principal*pow((1+rate/100),time);
            return interest;
        }
        float display_amount()
        {
            amount = interest + principal;
            cout<<"\nAmount = "<<amount;
        }

};

int main()
{
    Interest a;
    float am,p,r,t,ci;
    cout<<"Enter Principle, Rate and Time:\n";
    cin>>p>>r>>t;
    a.getData(p,r,t,am);
    ci=a.calculateInterest();
    cout<<"\nCompound Interest = "<<ci;
    a.display_amount();
    return 0;

}