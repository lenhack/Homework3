#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *lib_strcat(char *dest,const char *src){
	char * temp = dest;
	while(*temp){
		temp++;
	}
	while(*src){
		*temp = *src;
		temp++;
		src++;
	}
	*temp = '\0';
	return dest;
}  

void main(int arc, char**arv){
	char *s1 = "aaaa ";
	char *s2 ="bbbb";
	int len1 = strlen(s1);
	int len2 = strlen(s2);
 	int n = len1 + len2 + 1;
	char *dst1 = (char *)malloc(n);
	char* dst2 = (char *)malloc(n);
	
	strcpy(dst1, s1);
	strcpy(dst2, s1);
	
	char* string1 = lib_strcat(dst1, s2);
	char* string2 = strcat(dst2, s2);
	printf("%s\n", string1);
	printf("%s\n", string2);
	   

	int a = strcmp(string1, string2);
	if(a == 0){
		printf("OK\n");
	}else{
		printf("NOT OK\n");
	}
}