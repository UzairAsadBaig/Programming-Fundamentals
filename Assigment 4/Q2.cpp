#include<iostream>
using namespace std;
void bill(double a,char c,int b);
double room(double a,double b);
double meal(int a,int b);
double tax(double a,double b);
int main()
{  double a;
   int b;
   char c;
   cout<<"Enter the number of days stayed in a room\n";
   cin>>a;
   cout<<"Enter the category of room selected\n";
   cin>>c;
   cout<<"Enter the number of meals taken\n";
   cin>>b;
   bill(a,c,b);
   
}
void bill(double a,char c,int b)
{ 
    double x,y,v,t,total;
if(c=='A'||c=='a')
   {    
       x=room(a,1000);
       cout<<"Price of room for "<<a<<" days is = "<<x<<"\n";
   }
    else if(c=='B'||c=='b')
   {
       x=room(a,2000);
       cout<<"Price of room for "<<a<<" days is = "<<x<<"\n";
   }
    else if(c=='C'||c=='c')
   {   x=room(a,4000);
       cout<<"Price of room for "<<a<<" days is = "<<x<<"\n";
   }
    else if(c=='D'||c=='d')
   {   
       x=room(a,8000);
       cout<<"Price of room for "<<a<<" days is = "<<x<<"\n";
   }
   else 
   {
       cout<<"Wrong Input";
   }
   y=meal(b,80);
   cout<<"The price of "<<b<<" servings of food is = "<<y<<"Rs\n";
   v=x+y;
   t=tax(a,v);
   cout<<"The total tax including stay tax and general tax is = "<<t<<"Rs\n";
   total=v+t;
   cout<<"Hence your total bill is = "<<total<<"Rs\nThank you!";

}
double room(double a,double b)
{
    double z;
    z=a*b;
    return z;
}
double meal(int a,int b)
{
    double z;
    z=a*b;
    return z;
}
double tax(double a,double b)
{
    double j,y,t;
    j=(10*b)/100;
    y=40*a;
    t=j+y;
    return t;
}
