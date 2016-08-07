#include <stdio.h>
#include <stdlib.h>
int array()
    {
        int a [10];
        int i=0;
        for(i=0; i<10; i++){
            a [i]=i+1;
        }
        int j=0;
        for(j=0; j<10; j++){
            printf("a[%d]=%d\n", j, a[j]);
        }
        return 0;
    }

