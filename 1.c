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
    char *dest2 = (char*)malloc(strlen(src1));
    lib_strcpy(dest1, src1);
    strcpy(dest2, src1);    
    //printf("%s\n", dest1);
    //printf("%s\n", dest2);
    int w = strcmp(dest1, dest2);
    //printf("%d\n", w);
    if(w == 0){
        printf("OK\n");
    }else{
        printf("NOT OK\n");
    }
    free(dest1);
    free(dest2);
}