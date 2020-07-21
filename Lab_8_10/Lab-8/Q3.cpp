#include<iostream>
using namespace std;
void deci2bin(int dec);
int main()
{
     double a;
     cout<<"Enter the deicmal number\n";
     cin>>a;
     deci2bin(a);

}
void deci2bin(int dec)
{
    int b[100];
    int i=0,p;
    while (1)
    {
       b[i]=dec%2;
       if(b[i]==1)
       {
           dec=(dec-1)/2;
       }
       else
       {
           dec=dec/2;
       }
       if(dec==1)
       {  
           p=i+1;
          b[p]=1;
          break;
       }
     i++;
    }
    cout<<"\nThe binary is "; 
    while(p>=0)
    {
        cout<<b[p];
        p--;
    }

}