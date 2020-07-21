#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{  
    ifstream bin("poem01.txt");
    ofstream bout("output.txt");
    string l;
    while(!bin.eof())
    {
        getline(bin,l);
        if(l.length()>0)
        {
         bout<<l<<endl;
        }
          }
     bout.close();
     bin.close();
}