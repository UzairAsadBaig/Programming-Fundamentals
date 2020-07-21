#include<iostream>
using namespace std;
int main()
{  int x=1,z,n,k,a=1,b,c,d;
    while(x<=4)
    {   z=x;
        while(z+1<=4)
        {
            cout<<" ";
            z++;
        }
        n=1;
        while(n<=x)
        { 
          cout<<n;
          n++;
        }
        k=x-1;
        while(k>0)
        {
            cout<<k;
            k--;
        }
        cout<<endl;
        x++;
    }
    while(a<=4)
    {
           b=a;
        while(b>0)
        {
            cout<<" ";
            b--;
        }
        c=1;
        while(c<=4-a)
        {
           cout<<c;
           c++;
        }
           d=a;
        while(d+2<=4)
        {
            cout<<3-d;
            d++;
        }
        a++;
        cout<<endl; 
    }
  
    

}