#include<iostream>
using namespace std;

int main()
{
cout<<endl;

float bagSize;
float cost;
float area;
float perPound;
float perSquareFeet;

cout<<"Enter Bag Size in Pounds: ";
cin>>bagSize;
cout<<"Enter cost of the Bag: ";
cin>>cost;
cout<<"Enter area covered by each bag in square feet: ";
cin>>area;

perPound=cost/bagSize;
perSquareFeet=cost/area;

cout<<endl;

cout<<"________________________________________________"<<endl;
cout<<"Cost of the Fertilizer per pound is "<<perPound<<endl;
cout<<"Cost of fertilizing the area per square feet is "<<perSquareFeet<<endl;


return 0;
}