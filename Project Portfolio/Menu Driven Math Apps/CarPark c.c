#include <stdio.h>

int costCalc(int hours);


int main(void)
{
	int hours1;
	int hours2;
	int hours3;
		
	int rate1;
	int rate2;
	int rate3;
	
	int totalCost = 0;
	int totalHours = 0;
	
	printf("Welcome to the Car Park\n");
	printf("Enter the hours parked for three cars\n");
	scanf("\n%d", &hours1);
	scanf("\n%d", &hours2);
	scanf("\n%d", &hours3);
	
	printf("\nCar\t\tHours\t\tCharge\n");
	
	rate1 = costCalc(hours1);
	printf("%d\t\t%d\t\t%d\n", 1, hours1, rate1);
	totalCost += rate1;
	
	rate2 = costCalc(hours2);
	printf("%d\t\t%d\t\t%d\n", 2, hours2, rate2);
	totalCost += rate2;
	
	rate3 = costCalc(hours3);
	printf("%d\t\t%d\t\t%d\n", 3, hours3, rate3);
	totalCost += rate3;
	
	totalHours = hours1 + hours2 + hours3;
	printf("\nTOTAL\t\t%d\t\t%d\n", totalHours, totalCost);
	
	return 0;
}

int costCalc(int hours)
{
	int charge;
	
	//20 for first 3 hours
	if(hours <= 3)
	{
		charge = 20;
	}
	
	//additional 5 dollars per hour after first 3
	else if (hours <= 9)
	{
		charge = 20 + (5 * (hours - 3));
	}
	
	//Max charge 50 dollars
	else
	{
		charge = 50;
	}
	
	return charge;
}
