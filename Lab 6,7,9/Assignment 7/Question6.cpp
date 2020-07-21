#include<cmath>
#include<iostream>
using namespace std;
float distance(float a,float b,float c,float d)
{ 
    double x,y,z;
    x=(c-a)*(c-a);
    y=(d-b)*(d-b);
    z=sqrt(x+y);
    return z;
}
int main()
{
    float a,b,c,d,z;

    cout<<"Enter X and Y component of first vector\n";
    cin>>a;
    cin>>b;
    cout<<"Enter X and Y component of second vector\n";
    cin>>c;
    cin>>d;
    z=distance(a,b,c,d);
    cout<<"The result is "<<z;
    return 0;
}