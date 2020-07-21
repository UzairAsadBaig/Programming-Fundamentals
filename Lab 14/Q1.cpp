#include<iostream>
using namespace std;

int main(){
    int val1=2300,val2;

    //Part (a)

    cout<<"Address of val1: "<<&val1<<endl;
    cout<<"Address of val2: "<<&val2<<endl;
    
    //Part (b)

    int *myPointer= new int;

    //Part (c)
    
    cout<<"Size of *myPointer: "<<sizeof(*myPointer)<<endl;
    
    //Part (d)
     
     myPointer=&val1;
   
    //Part (e)
    
    cout<<"Value of *myPointer: "<<*myPointer<<endl;
    
    //Part (f)
    
     val2=*myPointer;
     
    //Part (g)
    
    cout<<"Value of val2: "<<val2<<endl;
    
    //Part (h)
    
    cout<<"Address of *myPointer: "<<myPointer<<endl;
    
    //Part (i)
    
  int &x= *myPointer;

    cout<<"Indirectly printing the value of *myPointer: "<<x<<endl;
    
    //Part (j)
    
    *myPointer=NULL;
     
    cout<<"Value of *myPointer: "<<x<<endl;
    
    }
