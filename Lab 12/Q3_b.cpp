#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char st[]="Send me back to the future on May 6,2020 to solve the Lab 12,please";
    //According to the requirement of the question.
    int i,c=0,index=strlen(st);
    
    st[index]='@';

    
    for(i=0;i<=500;i++)
    {
     c=c+1;
     if(st[i]>96 && st[i]<123)
     { 
         st[i]=st[i]-32;
         continue;
     }
     else if(st[i]!='\0')
     {
        continue;
     }
     break;
    }
    int j;
    for(j=0;j<c;j++)
     {
          cout<<st[j];
     }
     cout<<"\nThe length of the string (using C string) is "<<strlen(st);
    return 0;
}
