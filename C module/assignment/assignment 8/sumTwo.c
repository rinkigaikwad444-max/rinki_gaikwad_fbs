#include<stdio.h>
void main()
{
	int a[5]={1,2,3,4,5};
	int b[5]={10,20,30,40,50};
	int c[5];
	for(int i=0;i<5;i++)
	{
			c[i]=a[i]+b[i];
			printf("\t %d",c[i]);	
	}	

}