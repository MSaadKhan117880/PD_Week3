#include<iostream>
using namespace std;

int main()
{
float initialVelocity;
float finalVelocity;
float acceleration;
float time;

cout<<"Enter Initial Velocity(m/s): ";
cin>>initialVelocity;
cout<<"Enter Acceleration(m/s.s): ";
cin>>acceleration;
cout<<"Enter Time(s): ";
cin>>time;

finalVelocity = acceleration*time+initialVelocity;

cout<<"Final Velocity(m/s) is "<<finalVelocity<<endl;

return 0;
}