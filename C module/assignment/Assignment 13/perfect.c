#include<stdio.h>
#include<stdlib.h>
void perfect(int* n);
void main()
{
int* n=(int*)malloc(sizeof(int));
printf("Enter number to find perfect or not:");
scanf("%d",&n[0]);
perfect(n);
free(n);	
}
void perfect(int n[])
{
	int temp=n[0];
	int i=1;
	int sum=0;
	while(i<temp)
	{
		if(temp%i==0)
		{
	 		sum=sum+i;	
		}
			i++;
	}
	if(n[0]==sum)
	printf("perfect number");
	else 
	printf("not perfect");
}
