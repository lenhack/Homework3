#include <ctype.h>
#include <stdio.h>

int lib_toupper(int c){
    if(c >= 97 && c <=  122){
        c = c - 32;
    }        
    return c;
}

void main(){
    char a = 'a';
    //printf("%c %c\n", lib_toupper(a), lib_toupper(b));
    //printf("%c %c\n", toupper(a), toupper(b));
    char b = lib_toupper(a);
    char c = toupper(a);
    if(b == c){
        printf("OK\n");
    }else{
        printf("NOT OK\n");
    }
}