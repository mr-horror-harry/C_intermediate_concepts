#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char s[101]="HelloWorld";
    
    char *p=s;
    
    printf("%s\n", p);
    printf("%s\n", p)+0;
    printf("%s\n", p+7);
    printf("%s\n", p+10); // End of string
    printf("%s\n", p+strlen(s));
}