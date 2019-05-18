// Cross Pattern In C Language

#include "stdio.h"

int main(){
  int n, i, j, k, l, m, blank2;
  printf("enter the value\n");
  scanf("%d", &n);
  blank2=(n-1);

  for(i=1;i <= n;i++){              // upper
    for(j=2;j <= i;j++)
      printf(" ");
    for(k=1;k <= 3;k++){
      for(l=1;l <= 1;l++)
        printf("*");
      for(m=1;m <= blank2;m++)
        printf(" ");
    }
    printf("\n");                   // middle_line
    blank2--;
  }

  for(i=1;i <= (n*2)+1;i++)         // lower
    printf("*");
  printf("\n");
  blank2=0;

  for(i=1;i <= n;i++){
    for(j=n; j > i;j--)
      printf(" ");
    for(k=1;k <= 3;k++){
      for(l=1;l <= 1;l++)
        printf("*");
      for(m=1;m <= blank2;m++)
        printf(" ");
    }
    printf("\n");
    blank2++;
  }

  return 0;
}

                                        //       A 13 C
