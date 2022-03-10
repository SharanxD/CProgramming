#include<stdio.h>
int main(){
    int n,i,j,k,num,sp;
    sp=20;
    j = n-1;
    for(i=1,k=1;i<5;i++){
        for(num=1;num<=sp;num++){
            printf(" ");
            sp-=2;
        }
        for(j=1;j<=i;j++,k++){
            printf("%d ",k);
        }
        printf("\n");
    }
}
