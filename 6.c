#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *lib_strchr(const char* s, int c){
    
}

void main(){
    char* st = "abcdefg";
    int ch = 'd';

    printf("%c", lib_strchr(st, ch));
    printf("%c", strchr(st, ch));
}