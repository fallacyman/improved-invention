#include <stdio.h>
#include <stdlib.h>

void preorder (int* array, int curpos) {
	if(array[curpos]!=-1){
		printf("%d ", array[curpos]);
		array[curpos]=-1;
	}
	if(array[2*curpos]!=-1){
		preorder(array, 2*curpos);
	}
	else if(array[2*curpos+1]!=-1){
		preorder(array, 2*curpos+1);
	}
	else if((curpos-curpos%2)/2>=1){
		preorder(array, (curpos-curpos%2)/2);
	}
	else{
		return;
	}
}

void inorder (int* array, int curpos) {
	if(array[2*curpos]!=-1){
		inorder(array, 2*curpos);
	}
	else if(array[2*curpos+1]!=-1){
		printf("%d ", array[curpos]);
		array[curpos]=-1;
		inorder(array, 2*curpos+1);
	}
	else{
		printf("%d ", array[curpos]);
		array[curpos]=-1;
		if((curpos-curpos%2)/2>=1){
			inorder(array, (curpos-curpos%2)/2);
		}
		else{
			return;
		}
	}
}

void postorder (int* array, int curpos) {
	if(array[2*curpos]!=-1){
		postorder(array, 2*curpos);
	}
	else if(array[2*curpos+1]!=-1){
		postorder(array, 2*curpos+1);
	}
	else{
		printf("%d ", array[curpos]);
		array[curpos]=-1;
		if((curpos-curpos%2)/2>=1){
			postorder(array, (curpos-curpos%2)/2);
		}
		else{
			return;
		}
	}
}

int main()
    {
		int array[100];
		int num=0;
		int i = 0;
		while(scanf("%d", &num)==1){
    		array[i++]=num;
    	}
    	printf("sajkjs");
        preorder(array,1);
        printf("\n");
        inorder(array,1);
        printf("\n");
        postorder(array,1);
        printf("\n");
        return 0;
    }