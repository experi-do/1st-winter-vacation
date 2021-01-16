#include <stdio.h>

int main(void)
{
	int num;

	scanf("%d", &num);

	if (num % 2 == 0)
	{
		printf("CY");
	}
	else
	{
		printf("SK");
	}

	return 0;
}