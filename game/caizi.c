#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int ret;
	int n=0;
	printf("请猜会输出多少:");
    scanf("%d",&n);
	srand((unsigned)time(NULL));
	ret=rand()%101;
	printf("ret=%d\n",ret);
	if(n<ret)
	{
		printf("真笨，哈哈，猜小了！\n");
	}
	else if(n>ret)
	{
		printf("笨猪，猜大了！\n");
	}
	else
	{
		printf("你真棒，猜对了！\n");
	}
    system("pause");
	return 0;
}

