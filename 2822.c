#include <stdio.h>

void top_down_sort(int arr[]);
void bottom_up_sort(int arr[]);
void find(int arr1[], int arr2[]);

int main(void)
{
	int question[8], copy[8];
	int total = 0;

	for (int i = 0; i < 8; i++)
	{
		scanf("%d", &question[i]);
		copy[i] = question[i];
	}

	for (int i = 0; i < 6; i++)
	{
		top_down_sort(question);
	}

	for (int i = 0; i < 5; i++)
	{
		total += question[i];
	}

	printf("%d\n", total);
	find(copy, question);

	return 0;
}

void top_down_sort(int arr[])
{
	int temp;

	for (int i = 0; i < 7; i++)
	{
		if (arr[i] < arr[i + 1])
		{
			temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
		}
	}
}

void bottom_up_sort(int arr[])
{
	int temp2;

	for (int i = 0; i < 4; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			temp2 = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp2;
		}
	}
}

void find(int arr1[], int arr2[])
{
	int index[5] = {0,};

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (arr2[i] == arr1[j])
			{
				index[i] = j + 1;
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		bottom_up_sort(index);
	}
	
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", index[i]);
	}
	
}