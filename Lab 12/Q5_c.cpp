#include<iostream>

using namespace std;

int main()
{
    int a[3][5];
    int i,j,rsum[3],csum[5];

  //Using loop to take input into the array  
    
    cout<<"\nEnter the values for 3x5 array\n";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=4;j++)
        {
            cin>>a[i][j];
        }
    }
  //Using loop to calculate the row sum  
     for(j=0;j<=4;j++)
    {   csum[j]=0;
        for(i=0;i<=2;i++)
        {
            csum[j]+=a[i][j];
        }
    }
  //Using loops to print column indexing

  for(j=0;j<=4;j++)
        {
            cout<<"\t"<<j+1<<".";
        
        }
    cout<<"\n\n";
  //Using loop to print table including row indexing and row sum  
      for(i=0;i<=2;i++)
    {   
        rsum[i]=0;
        cout<<i+1<<".";
        for(j=0;j<=4;j++)
        {
            cout<<"\t"<<a[i][j];
            rsum[i]+=a[i][j];
        }
        cout<<"\t--> "<<rsum[i];
        cout<<endl;
    }
    //Using loop to display bottom arrow  
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
  
  //Using loop to display column sum
    for(i=0;i<=4;i++)
    {
        cout<<"\t"<<csum[i];
    }
}    