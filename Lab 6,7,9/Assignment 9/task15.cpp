#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{  
    ifstream bout("large.txt");
    long int n=40001;
    double a[n],z=0;
    int i;
    for(i=0;i<n;i++)
    {
       bout>>a[i];
       cout<<a[i],,endl;
    }
   
  
    bout.close();
      return 0;
}