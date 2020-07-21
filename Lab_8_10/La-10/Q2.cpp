#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;
int main()
{  
    bool a=false;
   fstream out("fellows2.txt",ios::out);
    while(1)
 {
   cout<<"Enter the Name\n";
   char name[40];
   if(a==true)
   {
   cin.ignore(1);
  
   }
   cin.getline(name,20);
   cout<<"Enter the Roll Number\n";
   string roll;
   cin>>roll;
   cout<<"Enter the cgpa\n";
   string cgpa;
   cin>>cgpa;
   cout<<"Do you want to continue? y/n\n";
   char yn;
   cin>>yn;
   out<<left<<setw(12)<<roll;
   out<<left<<setw(1)<<" ";
   out<<left<<setw(30)<<name;
   out<<left<<setw(1)<<" ";
   out<<left<<setw(5)<<cgpa<<endl;
   a=true;
   if((yn=='y')|| (yn=='Y'))
   {
       continue;
   }
   break;
 }  
 out.close();
}