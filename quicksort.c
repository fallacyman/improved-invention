#include <stdio.h>
#include <stdlib.h>
void quicksort1(int *b, int a);
int main()
    {
        int a, i;
        scanf("%d",&a);
        int b[a];
        for(i=0;i<a;i++)
        {
            scanf("%d", &b[i]);
        }
        quicksort1(b, a);
        for(i=0;i<a;i++)
        {
            printf("%d ", b[i]);
        }
        return 0;
    }

void quicksort1 (int *b, int a) {
    int i, j, k, l;
    if (a<2)
        return;
    k = b[a-1];
    for (i=0, j=a-1;; i++, j--) {
        while (b[i]<k)
            i++;
        while (k<b[j])
            j--;
        if (i >= j)
            break;
        l=b[i];
        b[i]=b[j];
        b[j]=l;
    }
    quicksort1(b, i);
    quicksort1(b+i, a-i);
}

