//Task 5 using try and catch function.
#include<iostream>
#include<string>
using namespace std;
struct Date{
   int month;   int date;
   int year;
};
string alphaDate(Date a)
{  
   string m,s;
   if(a.month<=12)
   {
      if(a.month==1)
      {m="January";}
      else if(a.month==2)
      {m="Feburary";}
      else if(a.month==3)
      {m="March";}
      else if(a.month==4)
      {m="April";}
      else if(a.month==5)
      {m="May";}
      else if(a.month==6)
      {m="June";}
      else if(a.month==7)
      {m="Jully";}
      else if(a.month==8)
      {m="August";}
      else if(a.month==9)
      {m="September";}
      else if(a.month==10)
      {m="October";}
      else if(a.month==11)
      {m="November";}
      else if(a.month==12)
      {m="December";}
     
      
   }
     else
      {
         throw "\nMonth value can be within 1 to 12\n";
      }
      int ma=a.month;
     if(ma==1 || ma==3 || ma==5 || ma==7 || ma==8|| ma==10 || ma==12)
     {
        if(a.date>31)
        {
        throw "\nEnter date between 1-31.\n";
        }
     }
     else
     {
        if(a.date>30)
        {
         throw "\nEnter date between 1-30.\n";
        }
     }
   string date1,year1;
   date1=to_string(a.date);
   year1=to_string(a.year);
   s.append(m);
   s.append(" ");
   s.append(date1);
   s.append(",");
   s.append(year1);
   return s;
}
int main()
{  
    Date a;
    string s;
    cout<<"Enter the month\n";
    cin>>a.month;    cout<<"Enter the date\n";
    cin>>a.date;
    cout<<"Enter the year\n";
    cin>>a.year;
    try
    {
      s=alphaDate(a);
      cout<<"\n"<<s; 
    }
    catch(const char* e)
    {
       cerr<<e<< '\n';
    }
    
    
}
