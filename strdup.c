#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char *lib_strdup(const char *s){
    char *s2 = (char*)malloc(strlen(s));
    for(int i = 0; i < strlen(s); i++){
        s2[i] = s[i];
    }
    return s2;    
}

 void main(){
     char *string = "qwertyuiop";
     char* string1 = lib_strdup(string);
     char* string2 = strdup(string);     
     //printf("%s\n", lib_strdup(string));
     //printf("%s\n", strdup(string));
    int a = strcmp(string1, string2);
	if(a == 0){
		printf("OK\n");
	}else{
		printf("NOT OK\n");
	}
    free(string1);
    free(string2);
 }
