#include<iostream>
#include<fstream>
#include<string>
#include<sstream>

using namespace std;

int conv_to_int(string n);

int main()
{
    // Taking the value of N
    string n;
    int N;
    fstream take_in("friends.txt", ios::in);
    getline(take_in,n);
    cout<<n;
    N=conv_to_int(n);
    string f;
    int F;
    getline(take_in,f);
    cout<<"\n"<<f;
    F=conv_to_int(f);
    string tdata[F];
    int j=0;
    while(!take_in.eof())
    {
       getline(take_in,tdata[j],',');
       cout<<"\n"<<tdata[j];
       j++;
    }
}
int conv_to_int(string n)
{
    int N;
    stringstream ss;
    ss<<n;
    ss>>N;
    return N;
}