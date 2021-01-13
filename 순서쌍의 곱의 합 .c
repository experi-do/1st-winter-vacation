#include <stdio.h>

int multiple(int arr[], int n, int num);

int main(void)
{
	int num, add = 0;
	int arr[100];
	int arr2[100];

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < num - 1; i++)
	{
		arr2[i] = multiple(arr, i, num);
		add += arr2[i];
	}

	printf("%d\n", add);

	return 0;
}

int multiple(int arr[], int n, int num)
{
	int ans = 0;

	for (int i = n + 1; i <= num - 1; i++)
	{
		ans += arr[n] * arr[i];
	}

	return ans;
}