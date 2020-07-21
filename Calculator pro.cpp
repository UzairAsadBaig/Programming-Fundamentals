#include<iostream>
float sum(int,float []);
using namespace std;
int main()
{  start:
     char a;
    cout<<endl<<"Select the operation to perform by entering the corresponding character"<<endl<<"a. Add"<<endl<<"b. mod"<<endl<<"c. Multiply"<<endl<<"d. Divide"<<endl<<"e. Power"<<endl<<"f. Square root"<<endl<<"g. Exit"<<endl;
    cin>>a;
    if(a=='a')
    {    int b;
        cout<<"Enter the number of values to be added"<<endl;
        cin>>b;
        cout<<"Enter the values one by one"<<endl;
       int i=0;
       float c[b];
        while(i<=b-1)
        {
            cin>>c[i];
            i=i+1;
        }
        long d;
      d=sum(b,c[b]);
    cout<<"The result is "<<d;
goto start;
    }
    else if(a=='b')
    {
         int a,b,c;
        cout<<"Enter the divisor"<<endl;
        cin>>a;
        cout<<"Enterthe divident"<<endl;
        cin>>b;
        c=a%b;
        cout<<"The result is "<<c;

goto start;
    }

    else if(a=='c')
    {

         int b;
        cout<<"Enter the number of values to be Multiplied"<<endl;
        cin>>b;
        cout<<"Enter the values one by one"<<endl;
       int i=0;
       float c[b];
        while(i<=b-1)
        {
            cin>>c[i];
            i=i+1;
        }
        i=0;
        long d=1;
        while(i<=b-1)
        {
            d=d*c[i];
            i=i+1;
        }
        cout<<"The result is "<<d;
    goto start;
    }
    else if(a=='d')
    {

         double a,b,c;
        cout<<"Enter the Divisor"<<endl;
        cin>>a;
        cout<<"Enterthe divident"<<endl;
        cin>>b;
        c=a/b;
        cout<<"The result is "<<c;
goto start;
    }
    else if(a=='e')
    {
       double a,d;
        int b;
    char c;
    cout<<"Enter any number"<<endl;
    cin>>a;
    cout<<"Enter its power"<<endl;
    cin>>b;
    c=1;
    d=a;
    while(c<=b-1)
   {   
       d=d*a;
       c=c+1;
   }
    cout<<"The result is "<<d;
    goto start;
    }
    else if(a=='f')
    {
        int a;
    char b,c;
    cout<<"Enter any perfect square"<<endl;
   cin>>a;
   b=0;
   c=1;
   while(b<a)
   {
       b=c*c;
       
       c=c+1;
   }
   cout<<"Your result is "<<c-1;
   goto start;
    }
    else if(a=='g')
    {
        goto end;
    }
else
{
    cout<<"Incorrect input"<<endl;
    goto start;
}
end:
return 0;
}
int sum(int b,float c[])
{
      int i=0;
        long  d=0;
        while(i<=b-1)
        {
            d=d+c[i];
            i=i+1;
        }
        return d;
}