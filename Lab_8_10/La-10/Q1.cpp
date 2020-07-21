#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{  bool a=false;
    while(1)
 {
      
   fstream out("fellows1.txt",ios::app);
   cout<<"Enter the Name\n";
   char name[20];
   if(a==true)
   {
   cin.ignore(1);
  
   }
   cin.getline(name,20);
   cout<<"Enter the Roll Number\n";
   string roll;
   cin>>roll;
   cout<<"Enter the cgpa\n";
   float cgpa;
   cin>>cgpa;
   cout<<"Do you want to continue? y/n\n";
   char yn;
   cin>>yn;
   out<<roll<<","<<name<<","<<cgpa<<endl;
   a=true;
   if((yn=='y')||(yn=='Y'))
   {
       continue;
   }
   break;
   out.close();
 }  
}