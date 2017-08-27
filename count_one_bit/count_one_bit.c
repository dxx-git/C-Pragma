#include<stdio.h>
#include<stdlib.h>
int count_one_bit(int n)
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
			count++;
		n = n / 2;
	}
	return count;
}

int main()
{
	int num = 0;
	int ret = 0;
	/*printf("%d");*/
	scanf("%d", &num);
	 ret = count_one_bit(num);
	printf("%d", ret);
	system("pause");
	return 0;
}
