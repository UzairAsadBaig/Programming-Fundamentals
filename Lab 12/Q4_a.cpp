#include<iostream>
#include<string>

using namespace std;
int main()
{    
    string st="Send me back to the future on May 6,2020 to solve the Lab 12,please";
    //According to the requirement of the question.
    st[27]='\0';
    
    int i,c=0;
    
        for(i=0;i<=st.length();i++)
    {
        c++;
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
    return 0;
} 
