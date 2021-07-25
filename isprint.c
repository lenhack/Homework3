#include <ctype.h>
#include <stdio.h>

int lib_isprint(int c){
    if(c > 31 && c <  127){
        return 1;
    }else{
        return 0;
    }
}

void main(){
    char a = ' ';
    char b = '\0';
    printf("%d %d\n", lib_isprint(a), lib_isprint(b));
    printf("%d %d\n", isprint(a), isprint(b));
}