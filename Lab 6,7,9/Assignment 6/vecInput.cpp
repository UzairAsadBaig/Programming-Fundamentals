#include <iostream>
using namespace std ;
struct vector3d
{  
 float x;
 float y;
 float z;
};
vector3d inPut(vector3d v1)
{

  cout<<"Enter the x,y and z components of 1st vector : "<<endl;
  cin>>v1.x;
  cin>>v1.y;
  cin>>v1.z;
 cout<<"Vector : "<<"("<<v1.x<<","<<v1.y<<","<<v1.z<<")"<<endl;
  return v1;
}
int main()
{ struct vector3d v1;
 inPut(v1);
  
return 0;
}