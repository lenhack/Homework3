#include <ctype.h>
#include <stdio.h>

int lib_isascii(int c){
    if(c >= 0 && c <= 255){
        return 1;
    }else{
        return 0;
    }
}

void main(){
    char a = 'h';
    char b = ')';
    printf("%d %d\n", lib_isascii(a), lib_isascii(b));
    printf("%d %d\n", isascii(a), isascii(b));
}