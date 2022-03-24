#include<stdio.h>
void mod(int a,int b){
	if(a%b==0) printf("Perfect Module");
	else printf("Not a perfect module");
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	mod(a,b);
}
