#define _CRT_SECURE_NO_WARNINGS 1
#include"seqlist.h"

void init_seqlist(pseq seq)
{
   assert(seq);
   memset(seq->arr,0,sizeof(seq->arr));
   seq->size = 0;
}
void print_seqlist(pseq seq)
{
    int i = 0;
	assert(seq && seq->size<=MAX);
	for(i=0; i<seq->size; i++)
	{
		printf("%d->",seq->arr[i]);
	}
	printf("end\n");
}
void pushback(pseq seq,Datatype x)
{
	assert(seq && seq->size<MAX);
	if(seq->size>=MAX)
		printf("顺序表已满\n");
	else
	{
	    seq->arr[seq->size++] = x;
	    printf("插入成功\n");
	}
}
void popback(pseq seq)
{
	assert(seq && seq->size<=MAX);
	if(seq->size==0)
		printf("顺序表已空\n");
	else
	{
		//方法1：
	    seq->size--;//将最后一个元素删除即可

		////方法2:调用擦除函数实现
		//erase(seq,seq->size-1);
	    printf("删除成功\n");
	}
}
void pushfront(pseq seq,Datatype x)
{
	assert(seq && seq->size<MAX);
	if(seq->size >= MAX)
		printf("顺序表已满\n");
	else
	{
	 //   //方法1(如果顺序表的元素与顺序无关)
		//seq->arr[seq->size]=seq->arr[0];//将首元素保存到最后位置
		//seq->arr[0]=x;
		//seq->size++;

		////方法2:调用插入函数
		//insert(seq,0,x);

		////方法3:
		//int i = 0;
		//for(i=seq->size; i>0; i--)//移动元素
		//{ 
		//	seq->arr[i] = seq->arr[i-1];
		//}
		//seq->arr[0] = x;//插入元素
		//seq->size++;

		//方法4:
		int i = 0;
		for(i=seq->size-1; i>=0; i--)//移动元素
		{ 
			seq->arr[i+1] = seq->arr[i];
		}
		seq->arr[0] = x;//插入元素
		seq->size++;
	}   
	printf("插入成功\n");
}
void popfront(pseq seq)
{
	assert(seq && seq->size<MAX);
	if(seq->size == 0)
		printf("顺序表已空\n");
	else
	{
		//   //方法1(如果顺序表的元素与顺序无关)
		//seq->arr[0]=seq->arr[seq->size-1];//将首元素保存到最后
		//seq->size--;

		////方法2：直接调用擦除函数
		//erase(seq,0);

		////方法3:
		//int i = 0;
		//for(i=0; i<seq->size-1; i++)//移动元素
		//{ 
		//	seq->arr[i] = seq->arr[i+1];
		//}
		//seq->size--;

		//方法4:
		int i = 0;
		for(i = 1; i<seq->size; i++)//移动元素
		{ 
			seq->arr[i-1] = seq->arr[i];
		}
		seq->size--;
	}   
	printf("删除成功\n");
}
void insert(pseq seq,int pos,Datatype x)
{
	assert(seq && seq->size<MAX);
	if(seq->size>=MAX)
		printf("顺序表已满\n");
	else
	{
		////方法1:
	 //   int i = 0;
		//for(i=seq->size; i>pos; i--)
		//{
		//	seq->arr[i] = seq->arr[i-1];
		//}
		//seq->arr[pos] = x;
		//seq->size++;

		//方法2:
	    int i = 0;
		for(i=seq->size-1; i>=pos; i--)
		{
			seq->arr[i+1] = seq->arr[i];
		}
		seq->arr[pos] = x;
		seq->size++;
	}
	printf("插入成功\n");
}
void erase(pseq seq,int pos)
{
	assert(seq && seq->size<=MAX);
	if(seq->size==0)
		printf("顺序表已空\n");
	else
	{
	    int i = 0;
		for(i=pos; i<seq->size-1; i++)
		{
			seq->arr[i] = seq->arr[i+1];
		}
		seq->size--;
		printf("擦除成功\n");
	}
}
int find(pseq seq,Datatype x)
{
	int i = 0;
	assert(seq && seq->size<=MAX);
	for(i=0; i<seq->size; i++)
	{
		if(seq->arr[i] == x)
			return i;//返回首次出现位置的下标
	}
	return -1;
}
void remmove(pseq seq,Datatype x)
{
	assert(seq && seq->size<=MAX);
	if(seq->size==0)
		printf("顺序表已空\n");
	else
	{
		int i = 0;
	    for(i=0; i<seq->size; i++)
		{
			if(seq->arr[i]==x)
			{
				int j = 0;
				for(j=i; j<seq->size; j++)//移动元素
				{
					seq->arr[j]=seq->arr[j+1];
				}
			}
		}
		seq->size--;
		printf("删除成功\n");
	}

}
void remmove_all(pseq seq,Datatype x)
{
	assert(seq && seq->size<=MAX);
	if(seq->size==0)
		printf("顺序表已空\n");
	else
	{
	 //   //方法1:找一个删一个
		//int i = 0;
		//int count = 0;
		//for(i=0; i<seq->size; ++i)
		//{
		//	if(seq->arr[i] == x)
		//	{
		//		int j = 0;
		//		for(j=i; j<seq->size; j++)//移动元素
		//		{
		//			seq->arr[j]=seq->arr[j+1];
		//		}
		//		seq->size--;
		//	}
		//}

		//方法2：
		int i = 0;
		int count = 0;
		assert(seq && seq->size<MAX);
		for(i=0; i<seq->size; i++)
		{
			seq->arr[i-count]=seq->arr[i];
			if(seq->arr[i] == x)
				count++;
		}
		seq->size-=count;
	}
		printf("删除成功\n");
}
void empty(pseq seq)
{
	assert(seq && seq->size<MAX);
	seq->size=0;
	printf("清空成功\n");
}