#include <stdio.h>
void main()
{
	int i,j,m,n;
	printf("enter the size:");
	scanf("%d", &m);
	for (i=0; i<=m; i++) //row
	{
		for (j=0; j<=i; j++) //column
		{
			printf(" * ");
		}
		printf("\n");
	}
}
