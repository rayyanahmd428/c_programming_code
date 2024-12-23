#include<stdio.h>
#include<stdlib.h>
void main(){
    int n,i,j,k;
    printf("enter a number=");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        k=1;
        for(j=1;j<=(n*2)-1;j++){
            if((j==(n+1)-i || j==(n-1)+i) && i!=n){
                

                printf("*");
                
            }else{
                printf(" ");
            }
            if(i==n && k){
                printf("*");
                k=0;
            }else{
                printf(" ");
                k=1;
            }

        }printf("\n");
    }
    return 0;
}