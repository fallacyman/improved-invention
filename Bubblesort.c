#include <stdio.h>
#include <stdlib.h>
int main()
    {
        int i, j, k, l, a,idx=0;
        scanf("%d",&a);
        int b[a];
        for(i=0;i<a;i++)
        {
            scanf("%d", &b[i]);
        }
        for(i=0; i<a;i++){
                for(j=0; j<a-i; j++){
                    if(b[j]>b[j+1]) {
                        l=b[j];
                        b[j]=b[j+1];
                        b[j+1]=l;
                    }
                }
                for(idx=0;idx<a;idx++)
        {
            printf("%d ", b[idx]);
        }
                    printf("\n ");

        }
                            printf("\n ", b[i]);

        for(i=0;i<a;i++)
        {
            printf("%d ", b[i]);
        }
        return 0;
    }