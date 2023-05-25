//Frequency of an element in the array

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
	int element,count;
	printf("\nenter the element:");
	scanf("%d",&element);
	for(i=0;i<n;i++)
	{
		if(element==arr[i])
			count++;
	}
	printf("the frequency of the element %d is %d\n",element,count);
}

