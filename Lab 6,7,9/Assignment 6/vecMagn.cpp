#include <iostream>
#include <cmath>
using namespace std ;
struct vector3d
{  
 float x;
 float y;
 float z;
};
float magnitude(vector3d v1)
{
  float a,b,c,d,e;
  a=(v1.x)*(v1.x);
  b=(v1.y)*(v1.y);
  c=(v1.z)*(v1.z);
  d=a+b+c;
  e=sqrt(d);
  cout<<"Magnitude : "<<e<<endl;
  return e;

}
int main()
{ struct vector3d v1;
  cout<<"Enter the x,y and z components of 1st vector : "<<endl;
  cin>>v1.x;
  cin>>v1.y;
  cin>>v1.z;

  magnitude(v1);
  
  



    return 0;
}