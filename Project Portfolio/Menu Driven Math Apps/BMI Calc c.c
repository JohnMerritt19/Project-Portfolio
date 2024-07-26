#include <stdio.h>


int main(void)
{
	int height;
	int weight;
	int bmi;
	
	printf("Please enter your height (in inches): ");
	scanf("%d" , &height);
	
	printf("Please enter your weight (in pounds): ");
	scanf("%d", &weight);
	
	bmi = (weight * 703)/(height*height);
	
	printf("Your BMI is : %d", bmi);
	printf("\nBMI VALUES:");
	printf("\nUnderweight:  less than 18.5");
	printf("\nNormal:  between 18.5 and 24.9");
	printf("\nOverweight:  between 25 and 29.0");
	printf("\nObese:  30 or greater");
	
	return 0;
}
