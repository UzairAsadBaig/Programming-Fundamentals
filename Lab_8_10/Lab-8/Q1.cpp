#include<iostream>
using namespace std;
bool isSorted(int [],int start,int end);
int main()
{
    int l,s,e;
    cout<<"Enter the length of array\n";
    cin>>l;
    int a[l-1];
    cout<<"Enter the values.\n";
    int o=0;
    while(o<l)
    {
        cin>>a[o];
        o++;
    }
    
    cout<<"From were to start the sort check on the given numbers?\n";
    cin>>s;
    cout<<"Where to end the sort check\n";
    cin>>e;
    bool b=isSorted(a,s-1,e-1);
    if(b==true)
    {
        cout<<"It is sorted.\n";
    }
    else
    {
        cout<<"It is not sorted.\n";
    }

}
bool isSorted(int a[],int s,int e)
{
    int i=s;
    bool b;
    int assend=a[i]-1;
    while(i<=e)
    {   
        if(a[i]>assend)
        {
            assend=a[i];
            if(i==e)
            {
                b=true;
                return b;
            }
          
        }
        else
        {
           b= false;
           return b; 
        }

        i++;
    }
    return 0;
}