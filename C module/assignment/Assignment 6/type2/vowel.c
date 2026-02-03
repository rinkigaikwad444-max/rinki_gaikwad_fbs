#include<stdio.h>
int vowelOrconsonant();
void main()
{
	vowelOrconsonant()?	printf("vowel"):printf("consonant");
}

int vowelOrconsonant(){
	char ch='i';
	if(ch=='a'|| ch=='e' ||  ch=='i' ||  ch=='o' ||  ch=='u')
	 return 1;
	else
	 return 0;	
	
}