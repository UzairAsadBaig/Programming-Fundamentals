#include<iostream>

using namespace std;

int main()
{
    int a[3][5];
    int i,j;
    cout<<"\nEnter the values for 3x5 array\n";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=4;j++)
        {
            cin>>a[i][j];
        }
    }
  //Row major order
  cout<<"\nRow major order\n";
   for(i=0;i<=2;i++)
    {
        for(j=0;j<=4;j++)
        {
            cout<<a[i][j];
        }
        
    }
      //Column major order
  cout<<"\nColumn major order\n";
   for(j=0;j<=4;j++)
    {
        for(i=0;i<=2;i++)
        {
            cout<<a[i][j];
        }
        
    }

   //Computing average 
   
   int sum=0,count=0;
   float average;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=4;j++)
        {
            sum+=a[i][j];
            count++;

        }
    }
    average=sum/count;
    cout<<"\nThe average is "<<average<<endl;
 
  //Counting numbers less than or equal to average

  int ncount=0;
  for(i=0;i<=2;i++)
    {
        for(j=0;j<=4;j++)
        {
           if(a[i][j]<=average)
           {
               ncount++;
           }

        }
    }

    cout<<"The count of numbers less than or equal to average is "<<ncount;

}
