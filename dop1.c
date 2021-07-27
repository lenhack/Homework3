#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* string_to_upper(char *str){
    int i = 0;
    char* str2 = (char*)malloc(strlen(str));
    while(str[i]){
        if(str[i] > 96 && str[i] < 123){
            str2[i] = str[i] - 32;
        }else{
            str2[i] = str[i];
        }
        i++;
    }
    return str2;
}  

void main(){
    char * string= {"AbcdefGHIjklM"};
    char* string2 = string_to_upper(string);
    printf("%s\n", string2);
    free(string2);
}