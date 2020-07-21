#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;
int main()
{  
   fstream out("fellows2.txt",ios::in);
   cout<<"Enter the record number.\n";
   int a;
   cin>>a;
   int j=(a-1)*51;
   out.seekg( j , ios::beg);
   char s[49];
   out.getline(s,49);
   cout<<"Fellow number : "<<a;
   cout<<"\nRoll Number : ";
   int i=0;
   while(i<=11)
   {
       cout<<s[i];
       i++;
   }
   cout<<"\nName : ";
   while((i+1)<=42)
   { 
       cout<<s[i];
       i++;
   }
   cout<<"\nCGPA : ";
  while((i+1)<=49)
  {
      cout<<s[i];
      i++;
  }
   out.close();
}