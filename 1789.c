#include <stdio.h>

int main(void)
{
	long long int n, sum = 0, plus = 0;

	scanf("%lld", &n);

	while (n > sum)
	{
		plus++;
		sum += plus;

		if (n < sum)
		{
			plus--;
			break;
		}
	}

	printf("%d\n", plus);

	return 0;
}