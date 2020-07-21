#include<iostream>
using namespace std;
int sop(int b[],int c[],int j);
int main()
{
    int a,x,d;
    cout<<"Enter the length of arrays\n";
    cin>>a;
    d=a-1;
    int b[d],c[d],i=0,l=0;
    cout<<"Enter the value of first array one by one\n";
    while(i<=d)
    {
        cin>>b[i];
        i++;
    } 
    cout<<"Enter the value of first array one by one\n";
    while(l<=d)
    {
        cin>>c[l];
        l++;
    }
    x=sop(b,c,d);
    cout<<"The sum of prouct is "<<x<<endl;


}
int sop(int b[],int c[],int j)
{
   int p[j],i=0;
   while(i<=j)
   {
       p[i]=b[i]*c[i];
       i++;
   }
   int sum=0;
  int ii=0;
   while(ii<=j)
   {
       sum=sum+p[ii];
       ii++;
   }
   return sum;
}