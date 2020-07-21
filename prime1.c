#include <stdio.h>
//FA18-CHE-037  MUHAMMAD ZOHAIR BAIG

char isPrime(int a)
{

  int i;
  char z;
  for (i = 2; i < a; i++)
  {

    if (a % i == 0)
    {
      return 'f';

      break;
    }
  }
  return 't';
}

int main()
{
  int a;
  char z;
  printf("Enter a number.\n");
  scanf("%d", &a);
  if (a >= 0)
  {
    z = isPrime(a);
    if (z == 't')
    {
      printf("Its Prime Factors is 1 and %d", a);
    }
    else
    {

      printf("\nIts Prime Factors are ");
      int p;
      for (p = 2; p <= a; p++)
      {
        if (a % p == 0)
        {
          printf("%d ", p);
          a = a / p;
          p = 2;
        }
      }
      printf("\n");
    }
  }
  else
  {
    printf("\nInvalid input\n");
  }
}