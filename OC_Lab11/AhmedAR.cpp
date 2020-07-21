#include<iostream>
#include<fstream>
#include<string>
#include<sstream>

using namespace std;

int conv_to_int(string n);
int conv_to_int1(char n);

int main()
{
    // Taking the value of N
    string n;
    int N;
    fstream take_in("friends.txt", ios::in);
    getline(take_in,n);
    N=conv_to_int(n);
    if(N>50)
    {
        cout<<"\nThe file can contain 50 or less than 50 friends.\n";
    }

    // Taking the numbers of relations F
    string f;
    int F;
    getline(take_in,f);
    F=conv_to_int(f);

    // Reading the rest of data and storing it in Tdata  
    string tdata[F];
    int j=0;
    while(!take_in.eof())
    {
       getline(take_in,tdata[j]);
       j++;
    }
    int i,ii=0,k=0;
    int Tdata[2*F];
    for(i=0;i<F;i++)
    {  
        Tdata[k]=conv_to_int1(tdata[i][0]);
       // cout<<Tdata[k]<<endl;
        k++;
        Tdata[k]=conv_to_int1(tdata[i][2]);
      //  cout<<Tdata[k]<<endl;
        k++;
    }
    
    // Creating a 2-D table using value of N
    bool table[N][N],truth;
   
    int r,c,chk;
    for(r=0;r<N;r++)
    {
        cout<<"\t"<<r+1;
    }
    cout<<endl;
    for(r=0;r<N;r++)
    {
      for(c=0;c<N;c++)
     {
         
         truth=0;
        for(chk=0;chk<=(2*F)-1;chk=chk+2)
        {  
            
         //   cout<<Tdata[chk]<<Tdata[chk+1]<<endl;
            if((r==Tdata[chk]) && (c==Tdata[(chk+1)]))
            { 
              table[r][c]=1;
              truth=1;  
            }
          if((c==Tdata[chk]) && (r==Tdata[(chk+1)]))
            { 
              table[r][c]=1;
              truth=1;  
            }
        }
         if(truth==0)
           {
            table[r][c]=0;
           }
     }
    }

     for(r=0;r<N;r++)
    {
        cout<<r+1;
      for(c=0;c<N;c++)
    {
             cout<<"\t"<<table[r][c];
    }
     cout<<endl;
    }
   cout<<"\nEnter two integers one by one\n";
   int a,b;
   cin>>a;
   cin>>b;
   c=b;
   cout<<"\nMutual friends are  ";
    
      for(r=0;r<N;r++)
    {
             if(table[r][c]==1)
             {
                 cout<<r<<" ";
             }
    }

}

int conv_to_int(string n)
{
    int N;
    stringstream ss;
    ss<<n;
    ss>>N;
    return N;
}
int conv_to_int1(char n)
{
    int N;
    stringstream ss;
    ss<<n;
    ss>>N;
    return N;
}