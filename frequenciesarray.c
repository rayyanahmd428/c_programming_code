#include<stdio.h>
#include<stdlib.h>
void main(){
    int a[100],f[100];
    int n,i,j,k,count,num;

    printf("array size");
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
        if(f[i]%2==1)
        {
            for(j=i;j<n;j++)
            {
                a[j]=a[j+1];
                f[j]=f[j+1];
            }
            i--;
            n--;
        }
    }
   for(i=0;i<n;i++)
   {
    printf("%d",a[i]);
   }
    
    return 0;
}