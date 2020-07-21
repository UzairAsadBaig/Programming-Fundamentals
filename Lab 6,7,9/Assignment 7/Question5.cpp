#include<iostream>
using namespace std;
double sum(double a,double b)
{  
     double c=a+b;
    return c;
       
}
int main()
{
   double a,b,c;
   cout<<"Enter two numbers\n";
   cin>>a;
   cin>>b;
   c=sum(a,b);
   cout<<c;
}