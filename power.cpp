#include<iostream>
using namespace std;
int main()
{
    int a,b,d;
    char c;
    cout<<"Enter any number"<<endl;
    cin>>a;
    cout<<"Enter its power"<<endl;
    cin>>b;
    c=1;
    d=a;
    while(c<=b-1)
   {   
       d=d*a;
       c=c+1;
   }
    cout<<d;
    return 0;
}