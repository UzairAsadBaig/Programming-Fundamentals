#include<iostream>
using namespace std;
int main()
{   int a;
    char b,c;
    cout<<"Enter any number"<<endl;
   cin>>a;
   b=0;
   c=1;
   while(b<a)
   {
       b=c*c;
       
       c=c+1;
   }
   cout<<c-1;
    return 0;
}