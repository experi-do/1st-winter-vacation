#include <stdio.h>

int rev(int num);

int main(void)
{
	int x, y;

	scanf("%d %d", &x, &y);

	printf("%d \n", rev(rev(x) + rev(y)));

	return 0;
}

int rev(int num)
{
	int a, b, c, d;

	if (num >= 1000)
	{
		a = num / 1000;
		num = num - 1000 * a;
		b = num / 100;
		num = num - 100 * b;
		c = num / 10;
		d = num % 10;
		num = 1000 * d + 100 * c + 10 * b + a;
	}
	else if (num >= 100)
	{
		a = num / 100;
		num = num - a * 100;
		b = num / 10;
		c = num % 10;
		num = 100 * c + 10 * b + a;
	}
	else if (num >= 10)
	{
		a = num / 10;
		b = num % 10;
		num = 10 * b + a;
	}
	else
	{
		num = num;
	}

	return num;
}