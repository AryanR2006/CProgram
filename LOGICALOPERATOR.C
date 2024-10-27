// LOGICAL OPERATORS (&&)
#include <stdio.h>
int main()
{
	int a;
	printf("enter the value:");
	scanf("%d", &a);
	if (a%7==0 && a%5==0)
	{
		printf("%d is divisible",a);
	}
	else 
	{
		printf("%d is not divisible",a);
	}
	return 0;
}


