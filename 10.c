#include <ctype.h>
#include <stdio.h>

int lib_tolower(int c){
    if(c >= 65 && c <=  90){
        c = c + 32;
    }else if(c >= 192 && c <= 223){ // for russian and ukrainian letters
        c = c + 32;
    }else if(c == 168){    
        c = 184;
    }else if(c == 170){
        c = 186;
    }else if(c == 165){
        c = 180;
    }else if(c == 178){
        c = 179;
    }else if(c == 175){
        c = 191;
    }
    return c;
}

void main(){
    char a = 'A';
    //printf("%c %c\n", lib_tolower(a), lib_tolower(b));
    //printf("%c %c\n", tolower(a), tolower(b));

    char b = lib_tolower(a);
    char c = tolower(a);
    if(b == c){
        printf("OK\n");
    }else{
        printf("NOT OK\n");
    }
}