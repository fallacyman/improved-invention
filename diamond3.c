#include <stdio.h>
#include <stdlib.h>
int diamond3()
    {
        int i,j,a;
        printf("How tall do you want your diamond to be?");
        scanf("%d",&a);
        for(i=0; i<a/2; i++)
            draw(1-(a+(a%2))/2+i, 2*i+1);
        for(i=0; i<a%2; i++)
            draw(0, a);
        for(i=0; i<(a-(a%2))/2; i++)
            draw(-i-a%2,a-a%2-2*i-1);
        return 0;
    }

void draw(int a,int b)
{   int i;
    for(i=0;i>a;i--) printf(" ");
    for(i=0;i<b;i++) printf("*");
    printf("\n");
}
