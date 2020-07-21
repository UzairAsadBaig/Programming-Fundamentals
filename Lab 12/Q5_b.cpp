#include<iostream>

using namespace std;

int main()
{
    int a[3][5];
    int i,j,rsum[3];
    cout<<"\nEnter the values for 3x5 array\n";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=4;j++)
        {
            cin>>a[i][j];
        }
    }
  //Row wise sum
  cout<<"\nRow-wise sum\n\n";
   for(i=0;i<=2;i++)
    {   
        rsum[i]=0;
        for(j=0;j<=4;j++)
        {
            cout<<"\t"<<a[i][j];
            rsum[i]+=a[i][j];
        }
        cout<<"\t--> "<<rsum[i];
        cout<<endl;
    }
  
  //Coulum-wise sum
  int csum[5];
    cout<<"\nColumn-wise sum\n\n";
  //Using loop to culculate coulumn sum  
   for(j=0;j<=4;j++)
    {   csum[j]=0;
        for(i=0;i<=2;i++)
        {
            csum[j]+=a[i][j];
        }
    }
  //Using loop to display table  
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=4;j++)
        {
            cout<<"\t"<<a[i][j];
        }
        cout<<endl;
    }
  //Using loop to display arrow  
    cout<<"\n";
    
         for(i=0;i<=4;i++)
    {
        cout<<"\t|";
    }
    cout<<endl;
      for(i=0;i<=4;i++)
    {
        cout<<"\tv";
    }
    cout<<"\n\n";
  
  //Using loop to display sum
    for(i=0;i<=4;i++)
    {
        cout<<"\t"<<csum[i];
    }
}    