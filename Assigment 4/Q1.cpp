#include<iostream>
using namespace std;
double factorial(int n);
double power (double x,int y);
int main()
{   double x;
    int n,i=1;
    float z=0;
    cout<<"\nEnter the value of x.\n";
    cin>>x;
    cout<<"\nEnter the value of n.\n";
    cin>>n;
    while(i<=n)
    {
        z=z+(power(x,i)/factorial(i));
        i=i+2;
        if(i<=n)
        {        
           z=z-(power(x,i)/factorial(i));
           i=i+2;
           }
    }
    cout<<"The value of sin is "<<z;
}
double factorial(int n)
{ int i=1;
  double y=1;
  while(i<=n)
  {
      y=y*i;
      i++;
  }
 return y;
}
double power (double x,int y)
{  double z=1;
   while(y>0)
   {
       z=z*x;
       y--;
   }
   return z;
}