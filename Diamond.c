#include <stdio.h>
#include <stdlib.h>
int main()
    {
        int i=0;
        int j=0;
        int a;
        printf("How tall do you want your diamond to be?");
        scanf("%d",&a);
        switch(a%2){
            case 0:
                for(i=0; i<a/2; i++){
                    for(j=a/2-i;j>1;j--){
                        printf(" ");
                    }
                    for(j=0;j<2*i+1;j++){
                        printf("*");
                    }
                printf("\n");
                }
                for(i=0; i<a/2; i++){
                    for(j=0;j<i;j++){
                        printf(" ");
                    }
                    for(j=a;j>2*i+1;j--){
                        printf("*");
                    }
                printf("\n");
                }
                break;
            case 1:
                for(i=0; i<(a-1)/2; i++){
                    for(j=(a+1)/2-i;j>1;j--){
                        printf(" ");
                    }
                    for(j=0;j<2*i+1;j++){
                        printf("*");
                    }
                printf("\n");
                }
                for(i=a;i>0;i--){
                    printf("*");
                }
                printf("\n");
                for(i=0; i<(a-1)/2; i++){
                    for(j=1;j<i+2;j++){
                        printf(" ");
                    }
                    for(j=a-1;j>2*i+1;j--){
                        printf("*");
                    }
                printf("\n");
                }
                break;
            default:
                printf("Invalid Input");
                break;
        }
        return 0;
    }

