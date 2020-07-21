#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{  
   ofstream bout("file0x.txt");
    float a[5];
    int i,b=5;
    
    bout<<b<<"\n";
    cout<<"Enter five float value\n";
    for(i=0;i<5;i++)
    {
       cin>>a[i];
       bout<<a[i]<<" ";
    }
      return 0;
}