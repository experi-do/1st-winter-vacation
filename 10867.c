#include <stdio.h>

void sort(int arr[], int num);

int main(void)
{
	int n, cnt = 1, k = 1;
	int arr[100000];
	int array[100000] = { 1001, };

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	array[0] = arr[0];

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				break;
			}

			if (j != i - 1)
			{
				continue;
			}
			cnt++;
			
			array[k] = arr[i];
			k++;
		}
	}


	for (int i = 0; i < cnt; i++)
	{
		sort(array, cnt);
	}

	for (int i = 0; i < cnt; i++)
	{
		printf("%d ", array[i]);
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