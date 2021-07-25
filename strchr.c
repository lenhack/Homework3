#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *lib_strchr(const char* s, int c){
    while(*s != c && *s != '\0'){
        s++;
    }
    return s;
}

void main(){
    char* st = "always koka-kola";
    int ch = ' ';

    printf("%s\n", lib_strchr(st, ch));
    printf("%s\n", strchr(st, ch));
}