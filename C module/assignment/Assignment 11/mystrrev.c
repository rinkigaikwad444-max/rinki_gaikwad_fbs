#include<stdio.h>
#include<string.h>
void mystrrev(char str[]);
void main()
{
	char str[6]="Hello";
	mystrrev(str);	
}
void mystrrev(char str[])
{
	int left=0;
	int right=strlen(str)-1;
	while(left<right){
	
	char temp=str[left];
	str[left]=str[right];
	str[right]=temp;
	left++;
	right--;
	}
	printf("reverse string %s",str);
}