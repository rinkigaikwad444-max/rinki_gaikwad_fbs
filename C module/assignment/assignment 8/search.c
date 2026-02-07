#include<stdio.h>
void main()
{
//	int arr[10];
//	printf("Enter the value");
//	for(int i=0;i<10;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//		for(int i=0;i<10;i++)
//	{
//		printf("\n%d",arr[i]);
//	}

int a[5]={10,20,30,40,50};
int flag=0;
int i;
for ( i=0;i<5;i++)
{
	if(a[i]==30){
	
	flag=1;
	break;
}
}
if(flag==1)
printf("found at a[%d] index ",i);
else
printf("not found");


}