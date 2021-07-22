#include <ctype.h>
#include <stdio.h>

int lib_isprint(int c){
    if(c >= 32 && c <=  126){
        return 1;
    }else{
        return 0;
    }
}

void main(){
    char a = ' ';
    char b = 'n';
    printf("%d %d\n", lib_isprint(a), lib_isprint(b));
    printf("%d %d\n", isprint(a), isprint(b));
}