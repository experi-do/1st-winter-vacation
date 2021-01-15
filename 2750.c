#include <stdio.h>

void sort(int arr[], int num);

int main(void)
{
	int arr[1000];
	int num;

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < num; i++)
	{
		sort(arr, num);
	}

	for (int i = 0; i < num; i++)
	{
		printf("%d\n", arr[i]);
	}

	return 0;
}

void sort(int arr[], int num)
{
	int temp;

	for (int i = 0; i < num - 1; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
		}
	}
}
