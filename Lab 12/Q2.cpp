#include<iostream>

using namespace std;
int main()
{
    char line[500];
    int i,c=0;
    cout<<"Enter the string\n";
    cin.get(line,500);
    for(i=0;i<=500;i++)
    {
     c=c+1;
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
