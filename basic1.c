//Largest element in the array

#include<stdio.h>
int main()
{
	int n,arr[20];
	printf("enter the size of the array:");
	scanf("%d",&n);
	int i;
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	{
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	printf("the array is:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	int largest=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>largest)
		{
			largest=arr[i];
		}
	}
	printf("\nthe largest element in the array is:%d\n",largest);
}

