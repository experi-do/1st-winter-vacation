#include <stdio.h>

int main(void)
{
	int num = -1;
	int array[25] = { 0, };

	while (num != 0)
	{
		scanf("%d", &num);

		for (int i = 0; i < num; i++)
		{
			scanf("%d", &array[i]);
		}

		for (int i = 0; i < num; i++)
		{
			if (i != 0)
			{
				if (array[i] == array[i - 1])
				{
					continue;
				}
			}

			printf("%d ", array[i]);
		}

		if (num != 0)
		{
			printf("$\n");
		}
	}

	return 0;
}
