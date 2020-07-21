#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    fstream out("fellows2.txt",ios::in|ios::out|ios::ate);
    out.seekp(-102,ios::end);
   out<<left<<setw(12)<<"BCDF99H999";
   out<<left<<setw(1)<<" ";
   out<<left<<setw(30)<<"Bara Admi";
   out<<left<<setw(1)<<" ";
   out<<left<<setw(5)<<"4.00"<<endl;
   out.close();
   cout<<"Process completed\n";

}