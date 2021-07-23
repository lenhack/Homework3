#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *lib_strchr(const char* s, int c){
    int i = 0;
    while(s[i]!=c){
        i++;
    }
    return (char*)s;

}

void main(){
    char* st = "always koka-kola";
    int ch = ' ';

    printf("%s\n", lib_strchr(st, ch));
    printf("%s\n", strchr(st, ch));
}