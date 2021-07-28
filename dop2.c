#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

char* string_to_lower(char* str){
    int len = strlen(str);
    char* str2 = (char*)malloc(len+1);
    for(int i = 0; i < len; i++){
        str2[i] = tolower(str[i]);
    }
    str2[len]='\0';
    return str2;
}

void main(){
    char* string1= {"AbcdefGHIjklM"};
    char* string2 ={"Hello, - [poiu&?"};
    char* string3 = string_to_lower(string1);
    char* string4 = string_to_lower(string2);
    printf("%s\n", string3);
    printf("%s\n", string4);
    free(string3);
    free(string4);
}