#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int ret;
	int n=0;
	printf("��»��������:");
    scanf("%d",&n);
	srand((unsigned)time(NULL));
	ret=rand()%101;
	printf("ret=%d\n",ret);
	if(n<ret)
	{
		printf("�汿����������С�ˣ�\n");
	}
	else if(n>ret)
	{
		printf("�����´��ˣ�\n");
	}
	else
	{
		printf("��������¶��ˣ�\n");
	}
    system("pause");
	return 0;
}

