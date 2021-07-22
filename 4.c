#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *lib_strcat(const char *dest,const char *src){
    int len1 = strlen(dest);
    int len2 = strlen(src);
    int len = len1 + len2;
    char * new = (char*)malloc(len);
    
    int a = 0;
    int i = 0;
	while(dest[i] != '\0'){
	    new[i] = dest[i];
	    i++;
	}
	int e = strlen(new);
	int y = 0;
	while(src[y] != '\0'){
	    new[e+y] = src[y];
	    y++;
	}
	
	return new;
	free(new);
}  

void main(){
    const char *str1 = "abcd";
    const char *str2 = "efgh";
    char* string = lib_strcat(str1, str2);
    printf("%s", string);
}
