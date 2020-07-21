#include<iostream>
using namespace std;
int main()
{   while(1)
    {
        char a;
    cout<<"Enter your grade\n";
    cin>>a;
    if(a=='a'|| a=='A')
    {
        cout<<"Excellent\n";
    }
    else if(a=='b'||a=='B')
    {
        cout<<"Very Good\n";
    }
    else if(a=='c'||a=='C')
    {
        cout<<"Good\n";
    }
    else if(a=='d'||a=='D')
    {
       cout<<"Fair\n";
    }
    else if(a=='e'||a=='E')
    {
        cout<<"Poor\n";
    }
    else if(a=='f'||a=='F')
    {
        cout<<"Fail\n";
    }
    else
    {
        cout<<"Wrong input,try again\n";
        continue;
    }
    break;
    }
}