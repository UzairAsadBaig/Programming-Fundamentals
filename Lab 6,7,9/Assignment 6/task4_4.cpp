#include <iostream>
#include <cmath>
using namespace std ;
struct vector3d
{  
 float x;
 float y;
 float z;
};
float evaluate(vector3d v1,vector3d v2,vector3d v3)
{  //------>Cross Product of First two vectors<----------

    struct vector3d v12;
    v12.x=(v1.y*v2.z)-(v2.y*v1.z);
    v12.y=-((v1.x*v2.z)-(v2.x*v1.z));
    v12.z=(v1.x*v2.y)-(v2.x*v1.y);
// cout<<"Cross Product :"<<"("<<v12.x<<")"<<"i"<<" - "<<"("<<v12.y<<")"<<"j"<<" + "<<"("<<v12.z<<")"<<"k"<<endl;
//    cout<<v12.x<<","<<v12.y<<","<<v12.z<<endl;

//----------->Adding cross product and third vector<--------------

   struct vector3d v123;
   v123.x=(v12.x)+(v3.x);
   v123.y=(v12.y)+(v3.y);
   v123.z=(v12.z)+(v3.z);
   
 //------------->Magnitude<--------------
  
  float e,f,g,h,i;
  e=(v123.x)*(v123.x);
  f=(v123.y)*(v123.y);
  g=(v123.z)*(v123.z);
 
  h=e+f+g;
  i=sqrt(h);

  cout<<"Your Ans for |v1 X v2 +v3| : "<<i<<endl;
  return i;
}
int main()
{ struct vector3d v1,v2,v3;
  cout<<"Enter the x,y and z components of 1st vector : "<<endl;
  cin>>v1.x;
  cin>>v1.y;
  cin>>v1.z;

  cout<<"Enter the x,y and z components of 2nd vector : "<<endl;
  cin>>v2.x;
  cin>>v2.y;
  cin>>v2.z;
 
  cout<<"Enter the x,y and z components of 3rd vector : "<<endl;
  cin>>v3.x;
  cin>>v3.y;
  cin>>v3.z;
 
  evaluate(v1,v2,v3);

    return 0;
}