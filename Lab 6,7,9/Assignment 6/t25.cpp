#include<iostream>
using namespace std;
struct vector
{
  float x;
  float y;

};
int main(){
    int a[3]={23,12,10};
    char b;
    string s;

    cout<<"Size of struct : " <<sizeof(vector )<<endl;
    cout<<"Size of int    : " <<sizeof(a )<<endl;
    cout<<"Size of char   : " <<sizeof(b)<<endl;
    cout<<"Size of string : " <<sizeof(s)<<endl;
    




    return 0;
}