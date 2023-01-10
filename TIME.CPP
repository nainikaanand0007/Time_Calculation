#include<iostream.h>
#include<conio.h>

void time(int hrs,int mins,int sec)
{

int total_time;
hrs=hrs*60*60;
mins=mins*60;
sec=sec;

total_time = hrs + mins + sec ;

cout<<"Total Time in seconds : "<<total_time;

}

void main()
{
   int h,m,s;
   clrscr();
   cout<<"Enter time in hours : ";
   cin>>h;
   cout<<"Enter time in minutes : ";
   cin>>m;
   cout<<"Enter time in seconds : ";
   cin>>s;

   time(h,m,s);

   getch();

 }

