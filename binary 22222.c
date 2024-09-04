#include<stdio.h>
int main()
{
    int n,i,a[100],e,found=0,first,last,mid,min,j,t,k;
    printf("\ncreate the array");
    printf("\nenter the limit:");
    scanf("%d",&n);
    for(i=0;i<n;i+=1)
    {
        printf("\nenter the value of a[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("\n ARRAY\n");
    
    for(i=0;i<n;i+=1)
    {
        printf("%d\t",a[i]);
    }
 
    for(i=0;i<n-1;i+=1)
    {
        min=i; 
        for(j=i+1;j<n;j+=1)
        {
            if(a[min]>=a[j])
            {
                min=j;
            }
            if(min!=i)
            {
                t=a[min];
                a[min]=a[i];
                a[i]=t;
            }
        }
    }

    
    printf("\n sorted ARRAY\n");
    for(k=0;k<n;k+=1)
    {
        printf("%d\t",a[k]);
    }
    printf("\nenter the search element:");
    scanf("%d",&e);
    first=0;
    last=n-1;
    mid=(first+last)/2;
    while(first<=last)
    {
        if(e==a[mid])
        {
            printf("element found at index %d",mid);
            break;
        }
        else if(e<a[mid])
        {
            last=mid-1;
        }
        else
        {
            first=mid+1;
        }
        mid=(first+last)/2;

    }
    return 0;
}
