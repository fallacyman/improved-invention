#include <stdio.h>
#include <stdlib.h>

int main()
{
   int w, l, i, j;
 
   printf("How wide are the matrices?\n");
   scanf("%d", &w);
   printf("How long are the matrices?\n");
   scanf("%d", &l);
   int elements[((2*w-l+1)*l)/2];
   printf("Enter elements in the upper triangle of the matrix\n");

   for (i = 1; i <= ((2*w-l+1)*l)/2; i++)
      scanf("%d", &elements[i]);
 
   printf("The matrix is \n");
 
   for (i = 1; i <= w; i++) {
      for (j = 1 ; j <= l; j++) {
         if(i>=j-1){
            printf("0\t");
         }
         else{
            printf("%d\t", elements[(((2*i-j+2)*(j-1))/2)+i-j+1]);
         }
      }
      printf("\n");
   }
 
   return 0;
}