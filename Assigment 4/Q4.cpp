#include<iostream>
using namespace std;
void ta(int x);
void taa(int x);
void tab(int x);
void tac(int x);
void tb(int a);
void tba(int a);
void tbb(int a);
void tbc(int a);

int main()
{
     ta(1);
     tb(1);
}
void ta(int x)
{
    while(x<=4)
    {
      taa(x);
      tab(x);
      tac(x);
      cout<<endl;
      x++;
    }
}
void tb(int a)
{
     while(a<=4)
    {
        tba(a);
        tbb(a);
        tbc(a);
        a++;
        cout<<endl;
    }
}
void taa(int x)
{
     int z=x;
        while(z+1<=4)
        {
            cout<<" ";
            z++;
        }


}
void tab(int x)
{
   int n=1;
    while(n<=x)
        {
          cout<<n;
          n++;
        }
}
void tac(int x)
{
     int k=x-1;
        while(k>0)
        {
            cout<<k;
            k--;
        }

}
void tba(int a)
{
    int b=a;
        while(b>0)
        {
            cout<<" ";
            b--;
        }
}
void tbb(int a)
{
    int c=1;
        while(c<=4-a)
        {
           cout<<c;
           c++;
        }
}
void tbc(int a)
{
  int d=a;
        while(d+2<=4)
        {
            cout<<3-d;
            d++;
        }
}
