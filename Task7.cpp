#include<iostream>
using namespace std;

int main()
{
cout<<endl;

string name;
float childPrice;
float adultPrice;
float childTicketsSold;
float adultTicketsSold;
float totalTickets;
float price;
float amount;
float totalAmount;
float percentage;

cout<<"Enter the Movie Name: ";
cin>>name;
cout<<"Enter the Adult Ticket Price: ";
cin>>adultPrice;
cout<<"Enter the Child Ticket Price: ";
cin>>childPrice;
cout<<"Enter the Number of Adult Tickets Sold: ";
cin>>adultTicketsSold;
cout<<"Enter the Number of Child Tickets Sold: ";
cin>>childTicketsSold;
cout<<"Enter the donation Percentage: ";
cin>>percentage;

totalTickets=adultTicketsSold+childTicketsSold;
adultPrice=adultTicketsSold*adultPrice;
childPrice=childTicketsSold*childPrice;
price=adultPrice+childPrice;
totalAmount =price - ((percentage/100)*price);

cout<<endl;
cout<<"_____________________________________________________________"<<endl;

cout<<"Total Amount Generated: "<<price<<endl;
cout<<"Amount after Donation: "<<totalAmount<<endl;

return 0;
}