#include<stdio.h>  
#include <string.h>    
int main(){    
    char ch1[100],ch2[100];
    printf("Enter string 1: ");
    scanf("%s",&ch1);
    printf("Enter string 2: ");
    scanf("%s",&ch2);
    strcat(ch1,ch2);
    printf("Value of string 1, after concatenation is: %s",ch1);    
    return 0;    
}    
