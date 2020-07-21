//header files
#include<iostream>
#include<fstream>
#include<string>

using namespace std;
//function decleration
void checkroll(string s,int c,char a);
void checkname(string s,int c,char a);
void checkcourse(string s,int c,char a);
void checkmids(string s,int c,char a);
void checksessional(string s,int c,char a);
void checkfinal(string s,int c,char a);
void check(string s,int c,char a);


//Main function
int main()
{
    fstream stu("student.txt",ios::in);
    fstream bout("errorlog.txt",ios::app);
    int c=1,z=118,Length;
    string s;
    char a;
    cout<<"Do you want to make an errolog file? y/n\n";
    cin>>a; 
    while(!stu.eof())
    {
         stu.seekg(z,ios::beg);
         getline(stu,s);
         Length=s.length();
        //Checking for line length to detect indentation error. 
          if(Length!=57)
       {
           cout<<"Indentation error at line number     "<<c<<"\n";
           if(a=='Y'||a=='y')
              {
              bout<<"Indentation error at line number     "<<c<<"\n";
              }
           z=z+Length+2;
           c=c+1;
           continue;
       }

       //Checking other errors using function.
       
       checkroll(s,c,a);
       checkname(s,c,a);
       checkcourse(s,c,a);
       checkmids(s,c,a);
       checksessional(s,c,a);
       checkfinal(s,c,a);
    
       //line increment.
       c=c+1;
       //Cursor possition increment.
       z=z+59;
    
    } 
    stu.close();
    
    //Checking whether a student enrolled in more than 3 courses.
     string roll;
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
            if(a=='Y'||a=='y')
              {
              bout<<"Roll number enrolled in more than one course "<<num[count]<<"\n";
              }
           }
        }
    }
    m=m+59;
    count=count+1;
    }
    coun.close();
    bout.close();
    //Error correction
    while(1)
    {
     fstream debugg("student.txt",ios::in|ios::out);
   int aa,zz=118,jj,nn,js;
   char bb;
   cout<<"\nWhich line do you want to edit.\n";
   cin>>aa;
   string show;
    js=zz+((aa-1)*59);
   debugg.seekg(js,ios::beg);
   getline(debugg,show);
   cout<<"\n"<<show<<"\n\n";
   cout<<"\nEnter the type of error to debug in the line shown above\n Press 'A' for Name\n Press 'R' for roll number\n Press 'C' for course name\n Press 'S' for sessional marks\n Press 'M' for mids marks\n Press 'F' for final marks\n";
   cin>>bb;
   if(bb=='A' || bb=='a')
   {
      nn=10;
   }
   else if(bb=='R' || bb=='r')
   {
      nn=0;
   }
    else if(bb=='C' || bb=='c')
   {
      nn=42;
   }
    else if(bb=='S' || bb=='s')
   {
      nn=52;
   }
    else if(bb=='M' || bb=='m')
   {
      nn=49;
   }
    else if(bb=='F' || bb=='f')
   {
      nn=55;
   }
   else
   {
       exit;
   }
     jj=zz+((aa-1)*59)+nn;
   debugg.seekp(jj,ios::beg);
    string data;
    cout<<" \n Enter data below\n";
    cin.ignore(1);
    getline(cin,data);
    debugg<<data;
    cout<<"\n-------------------------------TASK COMPLETED---------------------------------\n\n";
    char yn;
    cout<<"Do you want to continue? y/n\n";
    cin>>yn;
       if((yn=='y')|| (yn=='Y'))
   {
       continue;
   }
   break;   

    debugg.close();
  }
}


//Function definition
void checkroll(string s,int c,char a)
{   
    fstream bout("errorlog.txt",ios::app);
    int i=0,count=0;
    while(i<10)
    {
     if(s[i]==' ')
     {
       count=count+1;
         
     }
    i++;
    }
    if(count!=0)
    {
     cout<<"Roll number error on line            "<<c<<"\n";
     if(a=='Y'||a=='y')
         {
             bout<<"Name error on line            "<<c<<"\n";              
         }    
    } 
    bout.close();
}


void checkname(string s,int c,char a)
{
    fstream bout("errorlog.txt",ios::app);
    char ch=s[10];
  if((ch<65) || (ch>122))
    {
        cout<<"Name error on line            "<<c<<"\n";
        if(a=='Y'||a=='y')
              {
                  bout<<"Name error on line            "<<c<<"\n";
              }
    }
    bout.close();
}


void checkcourse(string s,int c,char a)
{
    fstream bout("errorlog.txt",ios::app);
    char ch=s[42];
 if((ch<65) || (ch>122))
    {
        cout<<"Course name error on line            "<<c<<"\n";
        if(a=='Y'||a=='y')
              {
                 bout<<"Course name error on line            "<<c<<"\n";
              }
    }
    bout.close();
}


void checkmids(string s,int c,char a)
{  
    fstream bout("errorlog.txt",ios::app);
    char ch=s[50];
    if((ch<48) || (ch>57))
    {
        cout<<"Mids marks error on line             "<<c<<"\n";
        if(a=='Y'||a=='y')
              {
                  bout<<"Mids marks error on line             "<<c<<"\n";
              }
    }
    bout.close();

}


void checksessional(string s,int c,char a)
{  
    fstream bout("errorlog.txt",ios::app);
    char ch=s[53];
   if((ch<48) || (ch>57))
    {
        cout<<"Sessional marks error on line        "<<c<<"\n";
        if(a=='Y'||a=='y')
              {
                  bout<<"Sessional marks error on line        "<<c<<"\n";
              }
    }
    bout.close();
}


void checkfinal(string s,int c,char a)
{
    fstream bout("errorlog.txt",ios::app);
   char ch=s[56];
 if((ch<48) || (ch>57))
     {
        cout<<"Final marks error on line            "<<c<<"\n";
        if(a=='Y'||a=='y')
              {
                  bout<<"Final marks error on line            "<<c<<"\n";
              }
    }
    bout.close();
}