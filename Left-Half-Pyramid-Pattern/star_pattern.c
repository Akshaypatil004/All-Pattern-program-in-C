/*
        *
      * *
    * * *
  * * * *
* * * * *

*/
#include <stdio.h>

int main()
{
  int n;

  printf("Enter number of rows:   ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {
    for (int k = n - 1; k >= i; k--)
    {
      printf("  ");
    }
    for (int j = 1; j <= i; j++)
    {
      printf("* ");
    }
    printf("\n");
  }

  // Here is the another method the to print the above pattern

  // #include <stdio.h>

  //   int main()
  //   {
  //     int n;

  //     printf("Enter number of row:    ");
  //     scanf("%d", &n);

  //     for (int i = 1; i <= n; i++)
  //     {
  //       for (int j = 1; j <= n; j++)
  //       {
  //         if (i + j <= n)
  //         {
  //           printf("  ");
  //         }
  //         else
  //         {
  //           printf("* ");
  //         }
  //       }
  //       printf("\n");
  //     }
  //     return 0;
  //   }
  return 0;
}