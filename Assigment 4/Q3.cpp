#include<iostream>
#include<cmath>
using namespace std;
void squarefeet(float l,float w);
void ccpsy(double c);
void cc(float l,float w,double c,double cd);
void labour(float l,float w,double ld);
void prepfee(void);
void tax(float l,float w,double c,double cd);
void discount(double cd,double ld);
void subtotal(float l,float w,double c);
void stld(float l,float w,double c,double cd,double ld);
void plustax(float l,float w,double c,double cd,double ld);
void totalcharges(float l,float w,double c,double cd,double ld);

int main()
{   float l,w;
    double c,ld,cd;
    cout<<"Enter the length\n";
    cin>>l;
    cout<<"Enter the width\n";
    cin>>w;
    cout<<"Enter the Carpet coast per square yard\n";
    cin>>c;
    cout<<"Enter the discount on carpet\n";
    cin>>cd;
    cout<<"Enter the discount on labour\n";
    cin>>ld;
    cout<<"\nBILL\n\n";
    squarefeet(l,w);
    ccpsy(c);
    cc(l,w,c,cd);
    labour(l,w,ld);
    prepfee();
    tax(l,w,c,cd);
    discount(cd,ld);
    subtotal(l,w,c);
    stld(l,w,c,cd,ld);
    plustax(l,w,c,cd,ld);
    totalcharges(l,w,c,cd,ld);
}
void squarefeet(float l,float w)
{  
    double sy;
    sy=round(l*w);
    cout<<"Square yards purchased =                  "<<sy<<" Rs\n";


}
void ccpsy(double c)
{
    cout<<"The carpet coast per square yard =        "<<c<<" Rs\n";
}                                                     
void cc(float l,float w,double c,double cd)                
{                                                            
    double sy,cc;                                          
    sy=round(l*w);                                       
    cc=(sy*c)-cd;                                     
    cout<<"Carpet charge =                           "<<cc<<" Rs\n";
}
void labour(float l,float w,double ld)
{
     double sy,labour;                                          
    sy=round(l*w);
    labour=(sy*22)-ld;
    cout<<"Labour =                                  "<<labour<<" Rs\n";
}
void prepfee(void)
{
    cout<<"Preperation fee =                         "<<"200 Rs\n";
}
void tax(float l,float w,double c,double cd)
{
    double sy,cc;
    float tax;                                          
    sy=round(l*w);                                       
    cc=(sy*c)-cd;
    tax=(cc*4)/100;
    cout<<"Tax =                                     "<<tax<<" Rs\n";         
}
void discount(double cd,double ld)
{
    double discount=cd+ld;
    cout<<"Discount =                                "<<discount<<" Rs\n"; 
}
void subtotal(float l,float w,double c)
{
   double sy,subtotal;                                          
    sy=round(l*w);                                       
    subtotal=(sy*c)+(22*sy);
    cout<<"Sub Total =                               "<<subtotal<<" Rs\n"; 

}
void stld(float l,float w,double c,double cd,double ld)
{
   double sy,stld;                                          
    sy=round(l*w);                                       
    stld=(sy*c)+(22*sy)-cd-ld;
    cout<<"Sub Total Less Discount =                 "<<stld<<" Rs\n"; 

}
void plustax(float l,float w,double c,double cd,double ld)
{
   double sy,plustax,cc,tax;                                          
    sy=round(l*w);    
     cc=(sy*c)-cd;
    tax=(cc*4)/100;                                   
    plustax=(sy*c)+(22*sy)-cd-ld+tax;
    cout<<"Plus Tax =                                "<<plustax<<" Rs\n"; 

}
void totalcharges(float l,float w,double c,double cd,double ld)
{
   double sy,plustax,cc,tax;                                          
    sy=round(l*w);    
     cc=(sy*c)-cd;
    tax=(cc*4)/100;                                   
    plustax=(sy*c)+(22*sy)-cd-ld+tax;
    cout<<"\n\nTotal Charges =                           "<<plustax<<" Rs\n\n\n\n\n\n"; 

}