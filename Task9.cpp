#include<iostream>
using namespace std;

int main()
{
cout<<endl;

int input;
int num1;
int num2;
int num3;
int num4;
int total;

cout<<"Enter a 4-Digit Number: ";
cin>>input;

num1 = input/1000;
num2 = (input%1000)/100;
num3 = ((input%1000)%100)/10;
num4 = ((input%1000)%100)%10;
total = num1+num2+num3+num4;

cout<<"Total Sum is "<<total<<endl;

return 0;
}