#include <stdio.h>
#include <string.h>

int lib_strcmp(const char *s1,const char *s2){
	int rez = 0;
	int a = strlen(s1);
	int b = strlen(s2);
	if(a<b){
	    rez = -1;
	}else if(a>b){
	    rez = 1;
	}else{
	    for(int i = 0; i <= strlen(s2); i++){
	        rez = s1[i] - s2[i];
	    }
	}
	return rez;
}  

void main(){
    char *str1 = "gfdsa";
    char *str2 = "hgfdsa";
    int a = lib_strcmp(str1, str2);
    int b = strcmp(str1, str2);
    printf("%d %d", a, b);
    
}
