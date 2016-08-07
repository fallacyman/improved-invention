
#include <stdio.h>
#include <stdlib.h>
 
int max (int *a, int n, int i, int j, int k) {
    int m = i;
    if (j < n && a[j] > a[m]) {
        m = j;
    }
    if (k < n && a[k] > a[m]) {
        m = k;
    }
    return m;
}
 
void heap (int *a, int n, int i) {
    while (1) {
        int j = max(a, n, i, 2*i+1, 2*i+2);
        if (j == i) {
            break;
        }
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
        i = j;
    }
}
 
void heapsort (int *a, int n) {
    int i, j;
    for (i = (n-2)/2; i>= 0;i--) {
        heap(a, n, i);
    }
    for (i = 0; i < n; i++) {
        int t = a[n-i-1];
        a[n-i-1] = a[0];
        a[0] = t;
        for (j = 0; j < n; j++){
            printf("%d%s", a[j], j == n - 1 ? "\n" : " ");
        }
        heap(a, n-i- 1, 0);
    }
}
 
int main () {
    int n, i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    heapsort(a, n);
    for (i = 0; i < n; i++){
        printf("%d%s", a[i], i == n - 1 ? "\n" : " ");
    }
    return 0;
}
 