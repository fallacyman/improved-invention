#include <stdio.h>
#include <stdlib.h>

int main()
{
   int w, l, i, j
 
   printf("How wide are the matrices?\n");
   scanf("%d", &w);
   printf("How long are the matrices?\n");
   scanf("%d", &l);
   int first[w][l],second[w][l],sum[w][l];
   printf("Enter the first matrix\n");
 


   for (i = 0; i < w; i++)
      for (j = 0; j < l; j++)
         scanf("%d", &first[i][j]);
 
   printf("Enter the second matrix\n");
 
   for (i = 0; i < w; i++)
      for (j = 0; j < l; j++)
         scanf("%d", &second[i][j]);
 
   printf("The sum of the two matrices are\n");
 
   for (i = 0; i < w; i++) {
      for (j = 0 ; j < l; j++) {
         sum[i][j] = first[i][j] + second[i][j];
         printf("%d\t", sum[i][j]);
      }
      printf("\n");
   }
 
   return 0;
}