#include <stdio.h>
#include <string.h>
#include <ctype.h>

void string_to_upper(char *str){
    for(int i = 0; str[i]!='\0'; i++){
        str[i] = toupper(str[i]);
    }
}  

void main(){
    char string[]= {'A', 'b', 'c', 'd', 'e', 'f', 'G', };
    string_to_upper(string);
    printf("%s\n", string);
}