#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char *lib_strdup(const char *s){
    char *s2 = (char*)malloc(strlen(s));
    for(int i = 0; i < strlen(s); i++){
        s2[i] = s[i];
    }
    return s2;
    free(s2);
}
 void main(){
     char *string = "qwertyuiop";
     
     printf("%s\n", lib_strdup(string));
     printf("%s\n", strdup(string));
 }
