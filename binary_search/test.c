#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};//提供查找的有序数组
	int num=0;//你要查找的数
	int sz=sizeof(arr)/sizeof(arr[0]);//数组长度
	int left=0;
	int right=sz-1;
	int mid=(left+right)/2;//进行比对的数
	
	printf("请输入你要查找的数：");
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