#include<iostream>
using namespace std;
int main()
{  int i=0,s=5,n;//s is the number of store,to extend the program,extend s.
     double a[s];
     while(i<5)
    {
        cout<<"\nEnter todays sale of store "<<i+1<<"\n";
        cin>>a[i];
        i++;
    }
    i=0;
    cout<<"\n";
    while(i<s)
    {   n=0;
        cout<<"Store "<<i+1<<":";
        while(n<=a[i])
        {
            cout<<"*";
            n=n+100;
        }
        cout<<"\n";
        i++;
    }
    cout<<"\n";
    return 0;
}