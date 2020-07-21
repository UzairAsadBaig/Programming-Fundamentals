#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
  while (1)
 {
      b=1;
      c=0;
     cout<<"\nEnter a perfect number\n";
      cin>>a;
     while(b<a)
    {
     if(a%b==0)
     {
       c=c+b;
       b++; 
     }
     else
     {
         b++;
     }
    }
  if(c==a)
  {
     cout<<"It is a perfect number.\n";
     break;
  }
  else
  {
     cout<<"It is not a perfect number.\n";
     char z;
     
     cout<<"Do you want to continue ?(y/n)\n";
     cin>>z;
     if(z=='y'||z=='Y')
     {
          continue;
     }
    
     else
     {
         break;
     }
    
  } 
   
 }
     
 return 0;
 }
 