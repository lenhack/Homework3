
#include <ctype.h>
#include <stdio.h>

int lib_isalpha(int c){
    if(c > 64 && c <  91 || c > 96 && c < 123){
        return 1;
    }else{
        return 0;
    }
}

void main(){
    char a = 'h';
    char b = ')';
    char c = '7';
    printf("%d %d %d\n", lib_isalpha(a), lib_isalpha(b), lib_isalpha(c));
    printf("%d %d %d\n", isalpha(a), isalpha(b), isalpha(c));
}