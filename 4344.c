#include <stdio.h>

int main(void)
{
	int num_test, num_student, total, cnt;
	int score_arr[1000];
	float percent, average;

	scanf("%d", &num_test);

	for (int i = 0; i < num_test; i++)
	{
		total = 0;
		cnt = 0;

		scanf("%d", &num_student);

		for (int j = 0; j < num_student; j++)
		{
			scanf("%d", &score_arr[j]);
			total += score_arr[j];
		}

		average = (float)total / num_student;

		for (int i = 0; i < num_student; i++)
		{
			if (score_arr[i] > average)
			{
				cnt++;
			}
		}

		percent = (float)cnt / num_student * 100;

		printf("%.3f%%\n", percent);
	}

	return 0;
}