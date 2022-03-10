#include<stdio.h>  
#include <string.h>    
int main(){    
    char ch1[100],ch22[100];
    printf("Enter string 1: ");
    scanf("%s",&ch1);
    printf("Enter string 2: ");
    scanf("%s",&ch22);
    //char ch[100]="Hello ";    
    //char ch2[100]="C Programming";    
    //strcat(ch,ch2);
    strcat(ch1,ch22);
    printf("Value of string 1, after concatenation is: %s",ch1);    
    return 0;    
}    
