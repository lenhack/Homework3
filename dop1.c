#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>



void string_to_upper(char *str){
    int len = strlen(str);
    char *new = (char*)malloc(len);
    for(int i = 0; i<=len; i++){
        char d = *str;
        str++;
        if(d >= 224 && d <= 255){
           d = d - 32;
        }
        printf("%d", d);
    }
    free(new);
}

void main(){
    char* string = "Кемел кеЙС";
    string_to_upper(string);
    //printf("%s", string);
}