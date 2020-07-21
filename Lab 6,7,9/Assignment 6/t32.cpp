#include <iostream>
using namespace std;
int main()
{

 float a,b,c,d,e,f,g,h,i,j,k;
 cout<<"Enter the amount of money at the end of the day : "<<endl;
 cin>>a;
 cout<<"No. of hours 1st boy worked : "<<endl;
 cin>>b;
 cout<<"No. of hours 2nd boy worked : "<<endl;
 cin>>c;
 
 e=(0.6)*a;
 cout<<"Amount of Money you get : "<<e<<" rupees"<<endl;
 f=a-e;
 cout<<"Remaining Money : "<<f<<" rupees"<<endl;
 g=b+c;
 h=(b/g);
 i=h*f;
 cout<<"Amount of Money 1st boy get : "<<i<<" rupees"<<endl;
 j=(c/g);
 k=j*f;
 cout<<"Amount of Money 2nd boy get : "<<k<<" rupees"<<endl;
    return 0;
}