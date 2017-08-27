#include<stdio.h>

int main()
{
	int i = 1;
	int j = 1;

	for (i = 1; i <= 100; i++)
	{
		for (j = 2; j < i ; j++)
		{
			if (i % j == 0 && i != 2)
			{
				break;
			}
			printf("%d ", i);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}