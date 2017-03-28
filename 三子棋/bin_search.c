#include<stdio.h>
int main()
{
  int arr[10];
  int x;
  int left=0;
  int right=sizeof(arr)/sizeof(arr[0])-1;
  int mid=(right-left)/2+left;
  int i=0;
  scanf("%d",&x);
  printf("请输入一个有序数组：");
  for(i=0;i<=10;i++)
  {
   scanf("%d  ",&arr[i]);
  }
  
	while(left<=right)
	{
		if(x>arr[mid])
		{
			left=mid+1;
		}
		else if(x<arr[mid])
		{
			right=mid-1;
		}
		else
		{
			printf("%d\n",mid);
		}
	}
		return 0;
}