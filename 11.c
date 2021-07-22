#include <ctype.h>
#include <stdio.h>

int lib_toupper(int c){
    if(c >= 97 && c <=  122){
        c = c - 32;
    }        
    return c;
}

void main(){
    char a = 'R';
    char b = 'n';
    printf("%c %c\n", lib_toupper(a), lib_toupper(b));
    printf("%c %c\n", toupper(a), toupper(b));
}