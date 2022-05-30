#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

class Interest

{

float principal,rate,time;

public:

 void getData(float p, float r,float t)

 {

  principal=p;

  rate=r;

  time=t;

 }

 float calculateInterest()

 {

  float interest=principal*pow((1+rate/100),time);

  return interest;

 }

};

int main()

{

Interest a;

float p,r,t,ci;

cout<<"Enter Principle, Rate and Time:\n";

cin>>p>>r>>t;

a.getData(p,r,t);

ci=a.calculateInterest();

cout<<"\nCompound Interest = "<<ci;

return 0;

}