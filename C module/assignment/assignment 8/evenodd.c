#include<stdio.h>
void main()
{
	int a[10]={11,34,6,45,57,9,12,81,19,10};
		printf("even numbers:");
	for(int i=0;i<10;i++)
	{	
		if(a[i]%2==0)
		printf("\t%d",a[i]);
   }
   printf("\nodd numbers:");
   	for(int j=0;j<10;j++)
	{
		
		if(a[j]%2!=0)
		printf("\t %d",a[j]);
   }
	
}
