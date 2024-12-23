#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[15],n,i,j,count,flag;
    printf("enter the array size=");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }

    for(i=0;i<n;i++)
    {    //unique checking
        count=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                count++;
            }
        }

        //prime number checking
        flag=0;
        if(a[i]<2)
        {
            flag=1;
        }
        else
        {
            for(j=2;j<a[i];j++)
            {
                if(a[i]%j==0)
                {
                    flag=1;
                    break;
                }
            }
        }
        
        //printing prime numbers
        //if(flag==0)
        //{
        //  printf("%d",a[i]);
        //}

        //prime and unique checking

        if(count==0 && flag==0)
        {   
            if(i<n-4)
            {

                for(j=i;j<n;j++)
                {
                  a[j+1]=a[j+4];
                } n=n-3;

            }
            else if(i==n-4)
            {
                n=n-3;
            }
            else if(i==n-3)
            {
                n=n-2;
            }
            else if(i==n-2)
            {
                n=n-1;
            }
            else if(i==n-1)
            {
                break;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

   

  return 0;
}