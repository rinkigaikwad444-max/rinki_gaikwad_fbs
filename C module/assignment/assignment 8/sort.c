#include<stdio.h>
void main()
{
	int a[5]={1,3,14,7,8};int i,j;
	printf("Before sorting:");
	for(int i=0;i<5;i++)
	{
		printf("\t %d",a[i]);
	}
	for(int i=0;i<5;i++)
	{
		for(j=0;j<5-1;j++)
		{
			if(a[j]<a[j+1])
			{
				int temp;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		
	}printf("\n");
	printf("After sorting:");
	for(int i=0;i<5;i++)
	{
		printf("\t %d",a[i]);
	}
	
}