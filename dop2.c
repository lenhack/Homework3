#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

char* string_to_lower(char* str){
    int i = 0;
    char* str2 = (char*)malloc(strlen(str));
    while(str[i]){
        if(str[i] > 64 && str[i] < 91){
            str2[i] = str[i] + 32;
        }else{
            str2[i] = str[i];
        }
        i++;
    }
    return str2;
}

void main(){
    char * string= {"AbcdefGHIjklM"};
    char* string2 = string_to_lower(string);
    printf("%s\n", string2);
    free(string2);
}