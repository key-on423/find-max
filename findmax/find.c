#include <stdio.h>

int main()
{
	int x;
	int max;
	int arr[10];
	printf("请输入10个整数，我可以找出最大值\n");
	for (x = 0;x <10;x++)
	{
		scanf("%d", &arr[x]);
	}
	for (x = 1;x < 10;x++)
	{
		max = arr[0];
		if (max < arr[x])
			max = arr[x];
	}
	printf("这十个数中最大值为%d", max);
	return 0;
}