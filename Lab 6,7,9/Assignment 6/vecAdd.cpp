#include <iostream>
using namespace std ;
struct vector3d
{  
 float x;
 float y;
 float z;
};
vector3d add(vector3d v1,vector3d v2)
{
  struct vector3d v12;
  v12.x=(v1.x)+(v2.x);
  v12.y=(v1.y)+(v2.y);
  v12.z=(v1.z)+(v2.z);

  cout<<"Sum of two vectors : "<<"("<<v12.x<<","<<v12.y<<","<<v12.z<<")"<<endl;
  return v12;

  
}
int main()
{ struct vector3d v1,v2;
  cout<<"Enter the x,y and z components of 1st vector : "<<endl;
  cin>>v1.x;
  cin>>v1.y;
  cin>>v1.z;

  cout<<"Enter the x,y and z components of 2nd vector : "<<endl;
  cin>>v2.x;
  cin>>v2.y;
  cin>>v2.z;

  add(v1,v2);
  
  



    return 0;
}