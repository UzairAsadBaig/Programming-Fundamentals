#include<iostream>
#include<cmath>
using namespace std;
int cbrt(int num);
int main()
{   
    int a,b;
    cout<<"Enter the number \n";
    cin>>a;
    b=cbrt(a);


    cout<<"Cube root of the number is "<<b<<endl;
    

    

}
int cbrt(int num)
{
   float c;
   c=pow(num,0.34);
    return c;
}