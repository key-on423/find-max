#include <stdio.h>

int main()
{
	int x;
	int max;
	int arr[10];
	printf("������10���������ҿ����ҳ����ֵ\n");
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
	printf("��ʮ���������ֵΪ%d", max);
	return 0;
}