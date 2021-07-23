#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t lib_strlen(const char *s){
    int i = 0;
    while(s[i]){
        i++;
    }
    return i;
}

void main(){
    const char* string = "jksfhkajfh";
    int a = lib_strlen(string);
    int b = strlen(string);
    //printf("%d %d", a, b);
    if(a == b){
        printf("OK\n");
    }else{
        printf("NOT OK\n");
    }
}