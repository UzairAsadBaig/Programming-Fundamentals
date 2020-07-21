#include<iostream>
using namespace std;
void join(int data[],int nd[],int i,int c);
int main()
{
    int data[100],nd[100],i=0,c=0;
    cout<<"Enter values to be stored in data, enter -1 to indicate end.\n";
    while(1)
    {
        cin>>data[i];
        if(data[i]==-1)
        {
            break;
        }
        i++;
    }
    cout<<"Enter values to be stored in nd, enter -1 to indicate end\n";
      while(1)
    {
        cin>>nd[c];
        if(nd[c]==-1)
        {
            break;
        }
        c++;
    }
    join(data,nd,i,c);
}
void join(int data[],int nd[],int i,int c)
{  
    int s,d;
    d=c+i;
    s=0;
    while(i<=d-1)
    {
        data[i]=nd[s];
        s++;
        i++;
    }
    int n=0;
    cout<<"\nThe output is \n";
    while(n<=d-1)
    {
        cout<<data[n]<<endl;
        n++;
    }
    


}