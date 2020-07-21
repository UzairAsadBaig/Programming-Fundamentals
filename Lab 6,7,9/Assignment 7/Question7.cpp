#include<iostream>
using namespace std;
int main()
{   int c=5;
    int numArray[c]={11,12,13,14,15};
    while(c>=0)
    {
        cout<<numArray[c-1];
        c--;
    }
}