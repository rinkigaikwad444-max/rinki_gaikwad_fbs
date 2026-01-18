#include<stdio.h>
void main()
{
	double price, dc;
	printf("Enter the price:\n");
	scanf("%lf",&price);
	char ans;
	printf("Are you a student y or n?");
	scanf(" %c",&ans);
	if(ans=='y')
	{
	    if(price>=500)
	    {
		
		dc=price*20/100;
		printf("You get 20 percent Discount and total discout is %lf",dc);
		printf("\nTotal price=%lf",price-dc);
		}
    
		else 
	   {
		dc=price*10/100;
		printf("You get 10 percent Discount and total discout is %lf",dc);
		printf("\nTotal price=%lf",price-dc);
	   }
    }
	else if(price>=600)
	 {
	 	dc=price*15/100;
		printf("\nYou get 15 percent Discount and total discout is %lf",dc);
		printf("\nTotal price=%lf",price-dc);
		
	 }
    else
    printf("\nNo discout total price=%lf",price);

}