#include<stdio.h>
int main()
{
	int arr[8]={9,0,3,4,0,0,1,0};
	int newarr[8],i,j=0,k;
	printf("The Array is:");
	for(i=0;i<8;i++)
	{
		printf("%d ",arr[i]);
		
	}
	for(i=0;i<8;i++)
	{
		if(arr[i]!=0)
		{
			newarr[j]=arr[i];
			j++;
		}
	}
	while(j<8)
	{
		newarr[j]=0;
		j++;
	}
	printf("\nThe New Array is:");
	for(k=0;k<8;k++)
	{
		printf("%d ",newarr[k]);
		
	}
	printf("\n");
}
