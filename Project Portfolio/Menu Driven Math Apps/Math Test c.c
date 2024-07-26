#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void addition(int a, int b);
void subtraction(int a, int b);
void multiplication(int a, int b);
void division(int a, int b);
char getDifficultyLevel();
int getNumberFromDifficulty(char c);


//global variables
float ttlProblems = 0;
float ttlCorrect = 0;
float average;

int main(void)  //Main function: Math Menu
{
	int num1, num2;
	int menuAns = 0;
	char difficultyLevel;
	
	printf("Math Program practice menu\n");
	
	while(menuAns != 5)	
	{
		printf("\n\nPlease make a selection (1-5)");	
		printf("\n1. Addition");
		printf("\n2. Subtraction");
		printf("\n3. Multiplication");
		printf("\n4. Division");
		printf("\n5. Exit\n");
		scanf("\n\n%d", &menuAns);
		
		if(menuAns < 5)
		{
		difficultyLevel = getDifficultyLevel();
		num1 = getNumberFromDifficulty(difficultyLevel);
		num2 = getNumberFromDifficulty(difficultyLevel);

		}
		
		
		
		
		if (menuAns == 1)
		{
			addition(num1, num2);
		}
		
		else if (menuAns == 2)
		{
			subtraction(num1, num2);
		}
		
		else if (menuAns == 3)
		{
			multiplication(num1, num2);
		}
		
		else if (menuAns == 4)
		{
			division(num1, num2);
		}
		
		else if (menuAns > 5){
			printf("Not a valid answer.\n");
		}
		printf("\n%.0f problems attempted\n", ttlProblems);
		printf("\n%.0f problems correct\n", ttlCorrect);
		average = ttlCorrect/ttlProblems;
		printf("\nYour score is %.2f", average*100);
	}

	
	return 0;
}

void addition(int a, int b)
{
		
	printf("Addition");
	
	int userAns;
	int answer = a + b;


	printf("\nPlease solve the following problem");
	printf("\n%d + %d = ", a, b);
	scanf("%d", &userAns);

	ttlProblems++;

 	if (userAns == answer)
 	{
 		printf("That is correct\n");
 		ttlCorrect++;
 	} 	
 	else
 	{
 		printf("That is incorrect\n");
 	}
}

void subtraction(int a, int b)
{
		
	printf("Subtraction");
	
	int userAns;
	int answer = a - b;

	ttlProblems++;

	printf("\nPlease solve the following problem");
	printf("\n%d - %d = ", a, b);
	scanf("%d", &userAns);
	
	if (userAns == answer)
 	{
 		printf("That is correct\n");
 		ttlCorrect++;
 	} 	
 	else
 	{
 		printf("That is incorrect\n");
 	}
}

void multiplication(int a, int b)
{
	
	printf("Multiplication");
	
	int userAns;
	int answer = a * b;
	
	ttlProblems++;
	
	printf("\nPlease solve the following problem");
	printf("\n%d * %d = ", a, b);
	scanf("%d", &userAns);
	
	if (userAns == answer)
 	{
 		printf("That is correct\n");
 		ttlCorrect++;
 	} 	
 	else
 	{
 		printf("That is incorrect\n");
 	}
}

void division(int a, int b)
{
	
	printf("Division");
	
	int numerator = 0;
	int denominator = 0;
	
	if (a >= b)
	{
		denominator = b;
		numerator = a;
	}
	else
	{
		denominator = a;
		numerator =b;
	}
	
	int userAns=0;
	int answer = numerator / denominator;

	int remainder = numerator % denominator;
	int userRemainder=0;

	ttlProblems++;

	
	printf("\nPlease solve the following problem");
	printf("\n%d / %d = ", numerator, denominator);
	scanf("%d", &userAns);
	
	printf("Remainder : ");
	scanf("%d", &userRemainder);
	
	if ((userAns == answer) && (userRemainder == remainder))
 	{
 		printf("That is correct\n");
 		ttlCorrect++;
 	} 	
 	else
 	{
 		printf("That is incorrect\n");
 	}
 	
}

char getDifficultyLevel()
{
	
	char difficultyLevel;
	
	
	printf("Please select a difficulty level.\ne for Easy\nm for Medium\nh for Hard\n");
	scanf("%c", &difficultyLevel);
 
 	difficultyLevel = tolower(difficultyLevel);
	
		while(difficultyLevel != 'e' && difficultyLevel != 'm' && difficultyLevel != 'h')
		{
			printf("Please enter a valid difficulty level.");
			scanf("%c", &difficultyLevel);
 			difficultyLevel = tolower(difficultyLevel);	
		}

return difficultyLevel;
}

int getNumberFromDifficulty(char difficultyLevel)
{
	int number = 0 ;
	char difficulty ;
	
	if(difficultyLevel == 'e')
   	{
   	number = rand()%10+1;
	}
	else if(difficultyLevel == 'm')
	
		{

  		number=rand()%100+1;

        }

	else if (difficultyLevel == 'h')

		{
			
  		number=rand()%1000+1;

		}        

return  number;
}

