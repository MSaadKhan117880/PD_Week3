#include<iostream>
using namespace std;

int main()
{
cout<<endl;

int num1;
int num2;

cout<<"Enter First Number: ";
cin>>num1;
cout<<"Enter Second Number: ";
cin>>num2;

num1=num1+num2;

cout<<"Enter Third Number: ";
cin>>num2;

num2=num1+num2;

cout<<"Enter Fourth Number: ";
cin>>num1;

num1= num2+num1;

cout<<"Enter Fifth Number: ";
cin>>num2;

num2 = num2+num1;

cout<<"The Sum is "<<num2<<endl;

return 0;
}