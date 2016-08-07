#include <stdio.h>
#include <stdlib.h>
int isoscelestriangle()
    {
        int i=0;
        int a;
        printf("How many levels do you want your triangle to be?");
        scanf("%d",&a);
        int j=0;
        for(i=0; i<a; i++){
            for(j=a-i;j>1;j--){
                printf(" ");
            }
            for(j=0;j<2*i+1;j++){
                printf("*");
            }
            printf("\n");
        }
        return 0;
    }
