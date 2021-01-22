#include <stdio.h>

int main(void)
{
	int num, cnt = 1;
	int height[50];
	int weight[50];
	int count[50];

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		scanf("%d %d", &weight[i], &height[i]);
	}

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			if (i != j)
			{
				if (height[i] < height[j] && weight[i] < weight[j])
				{
					cnt++;
				}
			}
		}

		count[i] = cnt;
		cnt = 1;
	}

	for (int i = 0; i < num; i++)
	{
		printf("%d ", count[i]);
	}

	return 0;
}
