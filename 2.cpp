#include<stdio.h>
void mod(float a,float b){
	if((int)a%(int)b==0) printf("Perfect Module");
	else printf("Not a perfect module");
}
int main(){
	float a,b;
	scanf("%f %f",&a,&b);
	mod(a,b);
}
