#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};//�ṩ���ҵ���������
	int num=0;//��Ҫ���ҵ���
	int sz=sizeof(arr)/sizeof(arr[0]);//���鳤��
	int left=0;
	int right=sz-1;
	int mid=(left+right)/2;//���бȶԵ���
	
	printf("��������Ҫ���ҵ�����");
	scanf("%d",&num);
	while(left<=right)
	{
	   if(num<arr[mid])
	   {
	      right=mid-1;
	   }
	   else if(num>arr[mid])
	   {
	      left=mid+1;
	   }
	   else//(num==arr[mid])
	   {
	      return mid;
	   }
	   break;

	   mid=(left+right)/2;
	}
	printf("num=%d\n",arr[mid]);
	system("pause");
	return 0;
}