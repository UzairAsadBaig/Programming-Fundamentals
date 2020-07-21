#include<stdio.h>
//FA18-CHE-037  MUHAMMAD ZOHAIR BAIG

int main()
{
  int i,j,k=8,n;
   for(i=0;i<4;i++)
   {
     
      for(j=0;j<=10+i;j++)
      {
          printf(" ");
      }
      k=k-2;
      n=1;
      do{

      printf("*");
      n++;

      }while(n<=k);
      //for(n=1;n<=k;n++)
      //{
      //    printf("*");
      //}
      
    
      printf("\n");

}
}