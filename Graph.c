#include <stdio.h>
#include <stdlib.h>
#define N 999
int n;
int edge[N][N];
int visited[N];
void dfs(int i){
	visited[i]=1;
	int nxt;
	int j;
	for(j=0;j<n;j++){
		if(edge[i][j]==1 && visited[j]==0){
			printf("%d\n",j+1);
			dfs(j);
		}
	}
}
int main()
	{
		int m,ed;
		printf("How many nodes are there?");
		scanf("%d",&n);
		printf("How many edges are there?");
		scanf("%d",&ed);
		for (m = 0; m < ed; m++){
			int s,e;
			scanf("%d %d", &s, &e);
			if(s<=n&&s>=1&&e>=1&&e<=n){
				edge[s-1][e-1]=1;
				edge[e-1][s-1]=1;
			}
        }
        int i,j;
        for (i = 0; i < n; i++){
      		for (j = 0; j < n; j++){
        		printf("%d ",edge[i][j]);
        	}
        	printf("\n");
        }
        printf("%d\n",1);
		dfs(0);
        return 0;
    }