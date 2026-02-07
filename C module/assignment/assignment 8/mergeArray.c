#include<stdio.h>
void main()
{	
int s1,s2;

printf("Enter size of array 1:");
scanf("%d",&s1);
int a[s1];
printf("Enter elements in array 1:");
for(int i=0;i<s1;i++)
{
	scanf("%d",&a[i]);
}

printf("Enter size of array 2:");
scanf("%d",&s2);
int b[s2];
printf("Enter elements in array 2:");
for(int i=0;i<s2;i++)
{
	scanf("%d",&b[i]);
}

int c[s1+s2];
for(int i=0;i<s1;i++)
{
	c[i]=a[i];
}
for(int i=s1;i<s1+s2;i++)
{
	c[i]=b[i-s1];
}

for(int i=0;i<s1+s2;i++)
{
	printf("\t %d",c[i]);
}
}
