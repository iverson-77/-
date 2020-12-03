#include<stdio.h> 
#include <stdlib.h>
#include <time.h>
int main()
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	srand(time(0)); // ��һ������
	int x = rand() % 10;
	printf("x:%d\n", x);
	
	int left = 0, right = 9;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid] < x)
		{
			left = mid + 1;
		}
		else if (a[mid] > x)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ���:%d\n", mid);
			return mid;
		}
	}

	printf("�Ҳ���\n");

	return 0;
}
