#include<stdio.h>
void main()
{
	int hr=1, min=120, sec=60;
	int hm=hr*60;
	int hs=hm*60;
	int ms=min*60;
	int total=hs+ms+sec;
	
	printf("%d",total);
	
	
}