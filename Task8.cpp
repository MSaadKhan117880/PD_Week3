#include<iostream>
using namespace std;

int main()
{
cout<<endl;

float vegetablePrice;
float fruitPrice;
int totalKgsVeg;
int totalKgsFruits;
float totalPrice;
float Rps;


cout<<"Enter Vegetable Price per Kilogram: ";
cin>>vegetablePrice;
cout<<"Enter Fruit Price per Kilogram: ";
cin>>fruitPrice;
cout<<"Enter Total Kilograms of Vegetables: ";
cin>>totalKgsVeg;
cout<<"Enter Tolal Kilograms of Fruits: ";
cin>>totalKgsFruits;

vegetablePrice=vegetablePrice*totalKgsVeg;
fruitPrice=fruitPrice*totalKgsFruits;
totalPrice=vegetablePrice+fruitPrice;
Rps=totalPrice/1.94;

cout<<"Total Earnings are "<<Rps<<endl;

return 0;
}