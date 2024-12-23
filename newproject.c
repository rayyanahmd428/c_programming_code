#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,a[15],f[15],i,j;
    int count;
    printf("enter the size=");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        f[i]=-1;
    }
    for(i=0;i<n;i++)
    {   
        count=0;
        for(j=0;j<n;j++)
        {
          if(a[i]==a[j])
          {
            count++;
          }
        }
        f[i]=count;      
    }
    for(i=0;i<n;i++)
    {
        if(f[i]>5)
        {
           for(j=i;j<n;j++)
           {
            a[j]=a[j+1];
            f[j]=f[j+1];
           }
           n--;
           i--;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }


  return 0;
}