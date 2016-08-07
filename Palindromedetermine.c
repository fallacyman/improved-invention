#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char T[257];
    fgets(T, 257, stdin);
    int length;
    length=strlen(T)-1;
    char S[length];
    int middle;
    middle=length+5;
    if(length%2==1){
        middle=(length-1)/2;
    }
    int i=0;
    for (i=0; i<length; i++){
        S[i]=48;
    }
    for(i=0; i<length; i++){

        if(i!=middle){
        printf("%c",T[i]);
        printf("\n");
        int k;
        if(S[0]==T[i]){
            printf("0\n");
            printf("\n");
            int j;
            for (j=1; j<length; j++){
                S[j]=S[j+1];
            }
            for (k=0; k<length; k++){
                printf("%c",S[i]);
            }
            S[length-1]=48;
        }
        else{
            printf("1\n");
            int k;
            int j;
            for (j=length-1; j>0; j--){
                S[j]=S[j-1];
            }
            for (k=0; k<length; k++){
                printf("%c",S[i]);
            }
            printf("\n");
            S[0]=T[i];
        }
    }
    }
    if(S[0]==48){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}