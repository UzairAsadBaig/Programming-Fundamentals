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
{   char name1[5];
    char name2[5];
    int c=5;
        name1[0]='U';
      name1[1]='z';
        name1[2]='a';
          name1[3]='i';
            name1[4]='r';
              name2[0]='A';
                name2[1]='s';
                  name2[2]='a';
                    name2[3]='d';
                      name2[4]=' ';

  
  printReverse(name1,c);
  printReverse(name2,c);
  
   return 0;
}