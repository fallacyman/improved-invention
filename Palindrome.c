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
    int i;
    for(i=0; i<length; i++){
    	printf("%c",T[i]);
    }
    for(i=length-1; i>-1; i--){
    	printf("%c",T[i]);
    }
    return 0;
   }