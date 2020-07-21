#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{

 while(1)
  {  
    fstream stu("student.txt",ios::in);
    
    char s[58];
    int yy;
    string roll,sub;
    int i,c=1,z=118;
 //Reading the file and checkig for.   
    while(!stu.eof())
    {
    stu.seekg(z,ios::beg);
    stu.getline(s,58);

   
    i=0;
    int re=0;//re will igonre if same error is detected more than one at the same place 
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
    //Extracting roll number, and checking wheter a student has enrolled in more than three courses.
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
//Now the proram will try to make changes to remove error according to users instruction.  
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