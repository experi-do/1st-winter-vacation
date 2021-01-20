#include <stdio.h>

void sort(int arr[], int num);

int main(void)
{
	int n;
	int array[10];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			scanf("%d", &array[j]);
		}

		for (int j = 0; j < 10; j++)
		{
			sort(array, 10);
		}

		printf("%d\n", array[2]);
	}

	return 0;
}


void sort(int arr[], int num)
{
	int temp;

	for (int i = 0; i < num - 1; i++)
	{
		if (arr[i] < arr[i + 1])
		{
			temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
		}
	}
}