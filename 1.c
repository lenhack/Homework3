#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char* lib_strcpy(char *dest, const char *src){
    int len = strlen(src);
    for(int i = 0; i <= len; i++){
        dest[i] = src[i];
    }
}

void main(){
    char* src1 = "kjdjshds";
    char *dest1 = (char*)malloc(strlen(src1));
    lib_strcpy(dest1, src1);
    printf("%s", dest1);
    free(dest1);
}