#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{ 
    ifstream bout1("data01.txt");
    ifstream bout2("data02.txt");
    ofstream aout1("max.txt");
    ofstream aout2("sum.txt");
    ofstream aout3("product.txt");
    long int n=10;
    double a[n],b[n],s1=0,s2=0,p1=1,p2=1,max1=0,max2=0;;
    int i;
    for(i=0;i<n;i++)
    {
       bout1>>a[i];
       bout2>>b[i];
        s1=s1+a[i];
        s2=s2+b[i];
        p1=p1*a[i];
        p2=p2*b[i];
     
       if(max1<a[i])
       {
           max1=a[i];
       }
       
       if(max2<b[i])
       {
           max2=b[i];
       }
    }
    aout1<<max1<<"  "<<max2;
    aout2<<s1<<"  "<<s2;
    aout3<<p1<<"  "<<p2;

    bout1.close();
    bout2.close();
    aout1.close();
    aout2.close();
    aout3.close();
      return 0;
}