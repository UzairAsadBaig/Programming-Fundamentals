#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    fstream stu("student.txt",ios::in);
    
   // char s[58];
    int yy;
    string roll,sub,s;
    int i,c=1,z=118,lengt;
    while(!stu.eof())
    {
    stu.seekg(z,ios::beg);
   // stu.getline(s,58);
       getline(stu,s);
   //    cout<<s<<"\n";
       lengt=s.length();
       if(lengt!=57)
       {
           cout<<"Indentation error at line number     "<<c<<"\n";
           z=z+lengt+2;
           c=c+1;
           continue;
       }
  
   
    i=0;
    int re=0;
    while(i<10)
    {
     if(s[i]==' ')
     {
       re=re+1;
         
     }
     
    i++;
    }
    if(re!=0)
    {
     cout<<"Roll number error on line            "<<c<<"\n";
    } 
    if((s[i+1]<65) || (s[i+1]>122))
    {
        cout<<"Name error on line            "<<c<<"\n";

    }
    
    if((s[i+32]<65) || (s[i+32]>122))
    {
        cout<<"Course name error on line            "<<c<<"\n";

    }
     if((s[i+40]<48) || (s[i+40]>57))
    {
        cout<<"Mids marks error on line             "<<c<<"\n";

    }
       if((s[i+43]<48) || (s[i+43]>57))
    {
        cout<<"Sessional marks error on line        "<<c<<"\n";

    }
    if((s[i+46]<48) || (s[i+46]>57))
     {
        cout<<"Final marks error on line            "<<c<<"\n";

    }
    c=c+1;
    z=z+59;
    }
    stu.close();
    int m=86,count=0;
    string num[1000];
    fstream coun("student.txt",ios::in);
     coun.seekg(m,ios::beg);
     while(!coun.eof())
    {
       getline(coun,roll);
    if(roll.size()==0)
    {
        continue;
    }
    num[count]=roll.substr(0,10);
     if(num[count]==num[count-1])
    {
        if(num[count-1]==num[count-2])
        {
            if(num[count-2]==num[count-3])
        {
            cout<<"Roll number enrolled in more than one course "<<num[count]<<"\n";
        }
        }
    }
    m=m+59;
    count=count+1;
    }
    coun.close();
}