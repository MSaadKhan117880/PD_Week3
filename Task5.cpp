#include<iostream>
using namespace std;

int main()
{
cout<<endl;

int days;
int weight;
int weightLoss;

days=15;

cout<<"Enter Weight that you want to loos: ";
cin>>weight;

weightLoss = weight * days;

cout<<endl;
cout<<"It will take you "<<weightLoss<<" Days to loose "<<weight<<" KGs "<<endl;

return 0;
}