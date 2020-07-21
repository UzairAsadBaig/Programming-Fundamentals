#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{  
    ifstream bout("file01.txt");
    float a[7],z=0;
    int i;
    for(i=0;i<7;i++)
    {
       bout>>a[i];
     
    }
    for(i=1;i<7;i++)
    {
        z=z+a[i];

    }
    cout<<"The sum of "<<a[0]<<" values in the file named file01.txt is "<<z;
    ofstream close;
      return 0;
}