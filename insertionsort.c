#include <stdio.h>
#include <stdlib.h>
int main()
    {
        int i, j, k, l, a,t, idx;
        scanf("%d",&a);
        int b[a];
        for(i=0;i<a;i++)
        {
            scanf("%d", &b[i]);
        }
        for(i=1;i<a;i++) {
            t = b[i];
            j = i;
            while(j > 0 && b[j-1]> t) {
                b[j] = b[j-1];
                j=j-1;
            }
            b[j] = t;
            for(idx=0;idx<a;idx++)
        {
            printf("%d ", b[idx]);
        }
        printf("\n");
        }
        printf("\n");

        for(i=0;i<a;i++)
        {
            printf("%d ", b[i]);
        }
        return 0;
    }