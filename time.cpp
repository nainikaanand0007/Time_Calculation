#include<iostream>

using namespace std;

void time(int hrs,int mins,int sec)
{

int total_time;
hrs=hrs*60*60;
mins=mins*60;
sec=sec;

total_time = hrs + mins + sec ;

cout<<"\nTotal Time in seconds : "<<total_time;

}

int main()
{
   int h,m,s;

   cout<<"Enter time in hours : ";
   cin>>h;
   cout<<"Enter time in minutes : ";
   cin>>m;
   cout<<"Enter time in seconds : ";
   cin>>s;

   time(h,m,s);

   return 0;

 }
