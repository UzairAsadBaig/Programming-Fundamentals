#include<iostream>
using namespace std;


int main(){
   
   double *v[25];
   
   //Allocation
    for(int k=0;k<25;k++)
        {
            
            v[k]=new double[k+1];
            
            
        }
    
   //Storing Random Values
      for (int z = 0; z < 25; z++)
     {
            
        for(int i=0;i<z;i++)
        {

        v[z][i]=(rand()%8)+2;        
            
        }
        
      
     }
     
   //Printing Triangle
      for (int z = 0; z < 25; z++)
     {
            
        for(int i=0;i<z;i++)
        {

        cout<<v[z][i];        
            
        }
        cout<<endl;
      
     }
   
   //De-Allocation
    for (int z = 0; z < 25; z++)
     {
        
      delete v[z];           
      
     }
          
}