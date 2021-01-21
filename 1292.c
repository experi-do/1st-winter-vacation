#include <stdio.h>

int main(void)
{
	int arr[1001] = { 0, };
	int start_point, end_point, sum = 0, cnt = 0;

	scanf("%d %d", &start_point, &end_point);

	for (int i = 1; i < 1000; i++)
	{
		for (int j = 0; j < i; j++)
		{
			arr[cnt] = i;

			if (cnt > 1000)
			{
				break;
			}

			cnt++;
		}
	}

	for (int i = start_point - 1; i < end_point; i++)
	{
		sum += arr[i];
	}

	printf("%d", sum);

	return 0;
}
