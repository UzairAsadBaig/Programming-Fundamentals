#include<stdio.h>

prime(int x)
{
   int a;
   for(a=2;a<=x;a++)
   {
      if(x%a==0)
      {
        printf("%d ",a);
        prime(x/a);
        break;
      }
    }
}

int main()
{
  int x;
  printf("\nInput an integer\n");
  scanf("%d",&x);
  if(x>0 || x==0)
  {
  	prime(x);
  }
  else
  	printf("\nInvalid Entry\n");

}