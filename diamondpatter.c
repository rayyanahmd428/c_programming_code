#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,k=0,i,j;
    printf("enter a number=");
    scanf("%d",&n);

    for(i=0;i<(n*2)-1;i++)
    {   
        
        i<n ? k++:k--;
        for(j=0;j<=(n*2)-1;j++)
        {
          if(j>=(n+1)-k && j<=(n-1)+k)
          {
            printf("*");
          }
          else
          {
           printf(" ");
          }
        }
        printf("\n");
    }
    return 0;
}