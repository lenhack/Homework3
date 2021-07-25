#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int lib_isdigit(int c){
    if(c > 47 && c < 58){
        return 1;
    }else{
        return 0;
    }
}



void main(){
    int a = '4';
    int b = 'h';
    int c = ':';

    int q = lib_isdigit(a);
    int w = isdigit(a);
    
    int e = lib_isdigit(b);
    int r = isdigit(b);

    int t = lib_isdigit(c);
    int y = isdigit(c);

    //if(q == w && e == r && t == y){
    //   printf("OK\n");
    //}else{
    //    printf("NOT OK\n");
    //}
    
    printf("%d %d %d\n", lib_isdigit(a), lib_isdigit(b), lib_isdigit(c));
    printf("%d %d %d\n", isdigit(a), isdigit(b), isdigit(c));
}