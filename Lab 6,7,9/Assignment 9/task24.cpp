#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct datafile
{ char header[2];
  int width;
  int height;
  int datasize;
  int shades;
  unsigned char data[90000];
};

void write(string fileName,datafile read2)
{
  ofstream doutout("xy.pgm");
  if (doutout.fail())
  {cout<<"UNABLE TO OPEN"<<endl;}
  char h[2];
  int width,height,shades;
  cout<<"Enter your header"<<endl;
  cin>>h[0];
  cin>>h[1];
  doutout<<h[0];
  doutout<<h[1]<<endl;
  cout<<"Enter width:"<<endl;
  cin>>width;
  doutout<<width<<endl;
  cout<<"Enter height:"<<endl;
  cin>>height;
  doutout<<height<<endl;
   read2.datasize=width*height;
   cout<<"Enter the value of shades:"<<endl;
   cin>>shades;
  doutout<<shades<<endl;
 
 for (int i = 0; i < read2.datasize; i++)
 {
     doutout<<int(read2.data[i])<<" ";
 }
 
  doutout.close();  



} 

int main()
{
  datafile reading;
  ifstream doutin("up.pgm");
  
  if (doutin.fail())
  {cout<<"UNABLE TO OPEN"<<endl;}
  doutin>>reading.header[0];
  doutin>>reading.header[1];
  //doutin.ignore(100);
  doutin>>reading.width;
  //doutin.ignore(100);
  doutin>>reading.height;
 // doutin.ignore(100);
     reading.datasize=reading.width*reading.height;
 
  
  doutin>>reading.shades;
  //doutin.ignore(100);  

  int x;
 for (int i = 0; i <reading.datasize; i++)
 {
   reading.data[i]=x;
   doutin>>x;  
 }
datafile read2=reading;
for (long i = 0; i <reading.datasize; i++)
{
    read2.data[reading.datasize-i-1]=reading.data[i];
 }

 write("xy.txt",read2);
cout<<"Your image has been converted!!"<<endl;

  return 0;
}

