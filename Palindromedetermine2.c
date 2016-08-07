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
    char Forwards[length];
    char Backwards[length];
    int i=0;
    for (i=0; i<length; i++){
        Forwards[i]=T[i];
        Backwards[length-1-i]=T[i];
    }
    int ret=0;
    for (i=0; i<length; i++){
        if(Forwards[i]!=Backwards[i]){
            ret=1;
        }
    }
    if(ret==0){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}