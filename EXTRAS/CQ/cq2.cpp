#include <stdio.h>

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}


void RearrangePosNeg(int arr[], int n)
{
	int key, j;
	for (int i = 1; i < n; i++) {
		key = arr[i];

		if (key > 0)
			continue;

		j = i - 1;
		while (j >= 0 && arr[j] > 0) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}

		arr[j + 1] = key;
	}
}

/* Driver program to test above functions */
int main()
{
	int arr[] = { -12, 11, -13, -5, 6, -7, 5, -3, -6 };
	int n = sizeof(arr) / sizeof(arr[0]);

	RearrangePosNeg(arr, n);
	printArray(arr, n);

	return 0;
}
