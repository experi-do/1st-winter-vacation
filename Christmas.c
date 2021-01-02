#include <stdio.h>

void star_printing(int count, int max_cnt);
void total_printing(int count);

int main(void)
{
	printf("\n\n");
	
	total_printing(5);

	return 0;
}

void star_printing(int count, int max_cnt)
{
	int middle = count / 2 + 1;

	for (int i = 0; i < middle; i++)
	{
		for (int j = 1; j <= max_cnt; j++)
		{
			printf("  ");

			if (j >= max_cnt / 2 + 1 - i && j <= max_cnt / 2 + 1 + i)
			{
				printf("*");
			}

			else
			{
				printf(" ");
			}
		}

		printf("\n");
	}
}

void total_printing(int cnt)
{
	int max_cnt = cnt + 6;

	for (int j = 1; j < max_cnt * 2 - 5; j++)
	{
		printf(" ");
	}
	printf("S2\n");

	star_printing(cnt, max_cnt);
	star_printing(cnt + 3, max_cnt);
	star_printing(max_cnt, max_cnt);

	for (int i = 0; i < 4; i++)
	{
		for (int j = 1; j <= max_cnt; j++)
		{
			printf(" ");
		}

		for (int j = 1; j <= (max_cnt + 4) / 2 + 1; j++)
		{
			if (j >= (max_cnt + 4) / 2 - 1 && (max_cnt + 4) / 2 + 2)
			{
				printf("*");
			}

			else
			{
				printf(" ");
			}
		}

		printf("\n");
	}

	printf("\n");

	for (int j = 1; j < max_cnt - 2; j++)
	{
		printf(" ");
	}
	printf("> Merry Christmas <\n");
}