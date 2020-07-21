#include<iostream>
using namespace std;
template <typename T>
T accumulate(T val[],int len)
{ 
    T sum=0;
    int i=0;
    while(i<=len)
    {
        sum=sum+val[i];
        i++;
    }
    return sum;
}

int main()
{   
    int len,sum;
    cout<<"Enter the length of the array\n";
    cin>>len;
    bool val[len];
    int i=0;
    cout<<"Enter the values one by one\n";
    while(i<len)
    {
        cin>>val[i];
        i++;

    }
   sum=accumulate(val,len-1);
    cout<<"The sum is "<<sum<<"\n";
}