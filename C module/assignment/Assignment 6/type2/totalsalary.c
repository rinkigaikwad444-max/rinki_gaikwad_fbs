#include <stdio.h>
double totalSalary();
void main()
{
	double ts;
  ts=totalSalary();
  printf("Total Salary= %lf",ts);
	
}
double totalSalary()
{
	double bs=7000;
	double da,ta,hra,ts;
	if(bs<5000)
	{
		da=bs*0.10;
		ta=bs*0.15;
		hra=bs*0.25;
	}
	else
	{
		da= bs*0.15;
		ta=bs*0.25;
		hra=bs*0.30;
	
	}
	ts=bs+da+ta+hra;
    return ts;

}