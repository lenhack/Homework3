#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *lib_strcat(const char *dest,const char *src){
    int len1 = strlen(dest);
    int len2 = strlen(src);
    int len = len1 + len2 + 1;
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
	new[e+y] = '\0';
	free(new);
	return new;	
}  

void main(){
    char str1[9] = {'a', 'b', 'c', 'd'};
    const char *str2 = "efgh";
    char* string1 = lib_strcat(str1, str2);
	char* string2 = strcat(str1, str2);
    //printf("%s", string);
	int a = strcmp(string1, string2);
	if(a == 0){
		printf("OK\n");
	}else{
		printf("NOT OK\n");
	}

}
