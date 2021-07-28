#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char* camel_case(char* str){
    int len = strlen(str);
    char* str2 = (char*)malloc(len+1);
    for(int i = 0; i<len; i++){
        if(!(i%2)){
            str2[i] = toupper(str[i]);
        }else{
            str2[i] = tolower(str[i]);
        }
    }
    str2[len]='\0';
    return str2;
}

void main(){
    char* string1= {"AbcdefGHIjklM"};
    char* string2 ={"Hello, - [poiu&?"};
    char* string3 = camel_case(string1);
    char* string4 = camel_case(string2);
    printf("%s\n", string3);
    printf("%s\n", string4);
    free(string3);
    free(string4);
}