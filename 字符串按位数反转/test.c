#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
void reverse(char *left,char *right)
{
    assert(left);
	assert(right);
	while(left<right)
	{
	    char tmp=*left;
		*left=*right;
		*right=tmp;
		left++;
		right--;
	}
}
void RightLoopMove(char *pStr,unsigned short steps)//三步翻转法
{
    int len=strlen(pStr);
	reverse(pStr,pStr+len-1-steps);
	reverse(pStr+len-steps,pStr+len-1);
	reverse(pStr,pStr+len-1);
}
//void RightLoopMove(char *pStr,unsigned short steps)//循环右移
//{
//	int len=strlen(pStr);
//	assert(pStr);
//	if(steps>len)
//	{
//	   steps=steps%(unsigned short)len;//防止给定的旋转步数过大
//	}
//	while(steps)
//	{
//	   unsigned int cur=0;
//	   char tmp=pStr[len-1];
//     for(cur=len-1; cur>0; cur--)
//	 {
//		 pStr[cur]=pStr[cur-1];
//	 }
//	pStr[cur]=tmp;
//	steps--;
//	}
//}
int main()
{
    char arr[]="abcdef";
	unsigned short steps=0;
	printf("请输入你要循环右移的位数：");
	scanf("%d",&steps);
	RightLoopMove(arr,steps);
	printf("%s\n",arr);
	system("pause");
	return 0;

}
