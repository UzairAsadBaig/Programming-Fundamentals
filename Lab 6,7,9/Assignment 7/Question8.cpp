#include<iostream>
using namespace std;
void printReverse(char name[],int c)
{
  
  while(c>=0)
    {
        cout<<name[c-1];
        c--;

    }
}
int main()
{   char name[10];
    int c=10;
    name[0]='U';
      name[1]='z';
        name[2]='a';
          name[3]='i';
            name[4]='r';
              name[5]=' ';
                name[6]='A';
                  name[7]='s';
                    name[8]='a';
                      name[9]='d';

  printReverse(name,c);
   return 0;

  

}