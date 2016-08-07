#include <stdio.h>
#include <stdlib.h>
int i,k;
void steps(int i);
int main()
    {
        int a, b, l;
        int j=0;
        k=1;
        scanf("%d%d",&a,&b);
        for(l=a;l<=b;l++){
            i=l;
            steps(i);
            if (j<k){
                j=k;
            }
        }
        printf("%d %d %d", a, b, j);
        return 0;
    }

void steps(int i){
    k=1;
    while(i>1)
    {
        if(i%2==0) i=i/2;
        else i=3*i+1;
        k++;
    }
}


