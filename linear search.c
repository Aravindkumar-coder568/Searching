#include<stdio.h>
 int main(){
	int a[100],n,i,se;
	printf("Enter the value for n : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the value for position %d : ",i);
		scanf("%d",&a[i]);
	}
	printf("Enter the search element : ");
	scanf("%d",&se);
	for (i=0;i<n;i++)
	{
		if (a[i]==se){
			break;
		}
	}
	if (i<n)
	{
		printf("element is found in index %d",i+1);
	}else{
		printf("element is not found");
	}
}

