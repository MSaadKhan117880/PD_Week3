#include<iostream>
using namespace std;

int main()
{
string name;
float marks1;
float marks2;
float marks3;
float marks4;
float marks5;
float total;
float percent;

cout<<"Enter Your Name: ";
cin>>name;
cout<<endl;
cout<<"Enter Subject 1 Marks: ";
cin>>marks1;
cout<<"Enter Subject 2 Marks: ";
cin>>marks2;
cout<<"Enter Subject 3 Marks: ";
cin>>marks3;
cout<<"Enter Subject 4 Marks: ";
cin>>marks4;
cout<<"Enter Subject 5 Marks: ";
cin>>marks5;


total = marks1+marks2+marks3+marks4+marks5;
percent= (total/500)*100;

cout<<endl;
cout<<"Your Percentage is "<<percent<<"%"<<endl;

return 0;
}