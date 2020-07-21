#include<iostream>
#include<string>

using namespace std;
int main()
{    
    string line;
    int i,c=0;
    cout<<"Enter the string\n";
    getline(cin,line);
        for(i=0;i<=line.length();i++)
    {
        c++;
     if(line[i]>96 && line[i]<123)
     { 
         line[i]=line[i]-32;
         continue;
     }
     else if(line[i]!='\0')
     {
        continue;
     }
     break;
    }
    int j;
    for(j=0;j<c;j++)
     {
          cout<<line[j];
     }
    return 0;
} 
