#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[15],n,i,j,sum=0;
    printf("enter array size=");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {   
            if(i==n-1)
            {
                n--;
                break;
            }
            for(j=i;j<n;j++)
            {
              a[j]=a[j+1];

            }
            i--;
            n--;
        }
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    int avg=sum/n;
    printf("%d",avg);
    
    return 0;

}