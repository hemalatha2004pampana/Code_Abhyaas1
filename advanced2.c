#include<stdio.h>

int sortarray(int arr[],int n)
{
	int low=0,mid=0,high=n-1;
	while(mid<=high)
	{
		if(arr[mid]==0)
		{
			int temp=arr[low];
			arr[low]=arr[mid];
			arr[mid]=temp;
			low++;
			mid++;
		}
		else if(arr[mid]==1)
		{
			mid++;
		}
		else
		{
			int temp=arr[mid];
			arr[mid]=arr[high];
			arr[high]=temp;
			high--;
		}
	}
}
int main()
{
	int n;
	printf("enter no. of elements in the array:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	sortarray(arr,n);
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}










