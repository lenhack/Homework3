#include <string.h>
#include <stdio.h>
#include <ctype.h>

void string_to_lower(char* str){
    for(int i = 0; str[i]!='\0'; i++){
        str[i] = tolower(str[i]);
    }
}

void main(){
    char string[]= {'A', 'b', 'c', 'd', 'e', 'f', 'G'};
    string_to_lower(string);
    printf("%s\n", string);
}