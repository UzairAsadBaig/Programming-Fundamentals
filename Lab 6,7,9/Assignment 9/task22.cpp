#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{  
    ifstream bout("poem01.txt");
    char w[40],c1,c2,c3,c4;
    string l;
    int lc=0,cc=0,vc=0,wc=0,ac=0,sc=0,y;
    while(!bout.eof())
    {
        getline(bout,l);
        if(l.length()>0)
        {
        lc++;
        }
    }
     bout.close();
     ifstream bout1("poem01.txt");
    while(!bout1.eof())
    {
        bout1>>c1;
     
        if(c1=='a'||c1=='e'||c1=='i'||c1=='o'||c1=='u'||c1=='A'||c1=='E'||c1=='I'||c1=='O'||c1=='U')
        {
            vc++;
        }
    }
     bout1.close();
     ifstream bout12("poem01.txt");
     while(!bout12.eof())
     {
           bout12>>c2;
        if('A'<= c2 && c2<='z')
        {
            ac++;
        }
     }
      bout12.close();
     ifstream bout13("poem01.txt");
     while(!bout13.eof())
    {
          bout13>>c3;
        if((c3>='!' && c3<='/') || (c3>=':' && c3<='@') || (c3>='[' && c3<'a') || (c3>='{' && c3<='~'))
        {
            sc++;
        }
       
    }
     bout13.close();
        ifstream bout14("poem01.txt");
      while(!bout14.eof())
    {
            bout14>>c4;
            cc++;
       
    }
     bout14.close();
     ifstream bout2("poem01.txt");
    while(!bout2.eof())
    {
        bout2>>w;
      
        wc++;
     
    }
      bout2.close();
    cout<<"Filename : poem.txt"<<endl;
    cout<<"Line count : "<<lc<<endl;
    cout<<"Character count  : "<<cc<<endl;
    cout<<"Vowels count : "<<vc<<endl;
    cout<<"Word count : "<<wc<<endl;
    cout<<"Alphabet count : "<<ac<<endl;
    cout<<"Special character count : "<<sc<<endl;
  
    return 0;


}
