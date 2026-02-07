#include<stdio.h>
void main()
{
	int a[8]={2,3,7,24,8,43,4,13};
	
	int i;
	for( i=0;i<8;i++ )
	{
		int flag=0;
		for(int j=2;j<a[i];j++)
		{
			if(a[i]%j==0)
			flag=1;
			break;
		}
		if(flag==0)
		printf("\n prime numbers= %d",a[i]);
	}
	
}