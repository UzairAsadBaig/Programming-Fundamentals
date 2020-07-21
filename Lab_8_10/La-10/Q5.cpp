#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;
int main()
{  int b=1;
   while(b<=3)
   {
   fstream out("fellows2.txt",ios::in);
   fstream rout("fellows4.txt",ios::app);

   int j=(b-1)*51;
   out.seekg( j , ios::beg);
   char s[49];
   out.getline(s,49);
   rout<<b<<" ";
 
   int i=12;
     while(i<=42)
   { 
       rout<<s[i];
       i++;
   }
   rout<<",";
   i=0;
   while(i<=11)
   {
       rout<<s[i];
       i++;
   }
   rout<<endl<<"  CGPA :";
   i=44;
  while(i<=47)
  {
      rout<<s[i];
      i++;
  }
  rout<<"\n\n";
   b++;
   out.close();
   }
   cout<<"Process finished,support us on patreon";

}
