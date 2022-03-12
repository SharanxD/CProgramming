#include<stdio.h>  
int armstrong(int n){    
	int r,sum=0,t;
	t=n;    
	while(n>0){    
		r=n%10;    
		sum=sum+(r*r*r);    
		n=n/10;    
	}    
	if(t==sum) return(1);    
	else return(0);    
	return 0;  
}
int main(){
	int n;
	int j=0;
	printf("Program to find armstrong number using pointers");
	printf("\nEnter Number 'n': ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		if(armstrong(i)==1){
			arr[j]=i;
			j++;
		}
	}
	int a, *point[j];
   	printf("Array of Armstrong Numbers using pointers!\n\n");
   	for(a=0;a<j;a++){
    	point[a]=&arr[a]; 
    	printf("%d\n",*point[a]);
   	}
}
