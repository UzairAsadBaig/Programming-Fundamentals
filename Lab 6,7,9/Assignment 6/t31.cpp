#include <iostream>
using namespace std;
int main()
{
  float a,b,l,m,n;
  cout<<"Enter the No. of rooms already painted : "<<endl;
  cin>>n;
  
  cout<<"Enter quantity of pain mixture used in them : "<<endl;
  cin>>m;
  
  cout<<"Enter the No rooms now you want to paint : "<<endl;
  cin>>l;

  a=m/n;
  b=l*a;

  cout<<"Required paint mixture : "<<b<<" liters"<<endl;



    return 0;
}
