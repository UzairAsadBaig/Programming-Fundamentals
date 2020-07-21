#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers one by one\n";
    cin>>a;
    cin>>b;
    if(a>b)
    {
        if(a%b==0)
        {
            cout<<a<<" is a multiple of "<<b;
        }
        else
        {
            cout<<a<<" is not a multiple of "<<b;
        }

    }
    else
    {
         if(b%a==0)
        {
            cout<<b<<" is a multiple of "<<a;
        }
        else
        {
            cout<<b<<" is not a multiple of "<<a;
        }
    }

    return 0;
}
