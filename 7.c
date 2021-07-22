#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int lib_isdigit(int c){
    if(c >= 0 && c <= 9){
        return 0;
    }else{
        return 1;
    }
}



void main(){
    int a = 467;
    char * string = "qwer58t";
    
    printf("%d\n", lib_isdigit(a));
    printf("%d\n", isdigit(a));
}