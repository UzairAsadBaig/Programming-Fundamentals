#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{  
    ifstream bout("large.txt");
    ofstream aout("text02.txt");
    long int n=40001;
    double a[n],z=0;
    int i;
    for(i=0;i<n;i++)
    {
       bout>>a[i];
       
    }
    for(i=1;i<n;i++)
    {
        z=z+a[i];
        

    }
    aout<<"The sum of following "<<a[0]<<" values in the file named large.txt is "<<z;
     for(i=0;i<n;i++)
    {
       aout<<a[i]<<endl;
       
    }
    bout.close();
    aout.close();
      return 0;
}