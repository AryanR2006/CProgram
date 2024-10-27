// CONDITIONAL OPERATORS

//2. nested if-else statement
#include <stdio.h>
int main()
{
	int a = 21;
	int b = 22;
	
	if (a%2==0)
	{
		printf("a is even no\n");
	}
	else
	{
		if (b%2==0)
		{
			printf("b is even no\n");
		}
		else 
		{
			printf("b is odd no\n");
		}
		printf("a is odd no\n");
	}
	
}
