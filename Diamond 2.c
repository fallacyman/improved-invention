#include <stdio.h>
#include <stdlib.h>
int diamond2()
    {
        int n,i;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
            foo(n-i,2*i-1);
        for(i=n-n%2;i>=1;i--)
            foo(n-i,2*i-1);
        return 0;
    }

void foo(int a,int b)
{   int i;
    for(i=0;i<a;i++) printf(" ");
    for(i=0;i<b;i++) printf("*");
    printf("\n");
}
