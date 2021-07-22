
#include <ctype.h>
#include <stdio.h>

int lib_isalpha(int c){
    if(c >= 65 && c <=  90 || c >= 97 && c <= 122 || c >= 192 && c <= 255){
        return 1;
    }else{
        return 0;
    }
}

void main(){
    char a = 'h';
    char b = ')';
    printf("%d %d\n", lib_isalpha(a), lib_isalpha(b));
    printf("%d %d\n", isalpha(a), isalpha(b));
}