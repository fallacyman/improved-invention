#include <stdio.h>
#include <stdlib.h>
int main()
    {
        int i, j, k, t, a;
        scanf("%d",&a);
        int b[a];
        for(i=0;i<a;i++)
        {
            scanf("%d", &b[i]);
        }
        for (i = 0; i < a; i++) {
            for (j = i, k = i; j < a; j++) {
                if (b[j] < b[k]) {
                    k = j;
                }
            }
            t = b[i];
            b[i] = b[k];
            b[k] = t;
            printf("%d ", b[k]);
        }
        for(i=0;i<a;i++)
        {
            printf("\n%d ", b[i]);
        }
        return 0;
    }