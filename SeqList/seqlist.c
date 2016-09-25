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
		printf("˳�������\n");
	else
	{
	    seq->arr[seq->size++] = x;
	    printf("����ɹ�\n");
	}
}
void popback(pseq seq)
{
	assert(seq && seq->size<=MAX);
	if(seq->size==0)
		printf("˳����ѿ�\n");
	else
	{
		//����1��
	    seq->size--;//�����һ��Ԫ��ɾ������

		////����2:���ò�������ʵ��
		//erase(seq,seq->size-1);
	    printf("ɾ���ɹ�\n");
	}
}
void pushfront(pseq seq,Datatype x)
{
	assert(seq && seq->size<MAX);
	if(seq->size >= MAX)
		printf("˳�������\n");
	else
	{
	 //   //����1(���˳����Ԫ����˳���޹�)
		//seq->arr[seq->size]=seq->arr[0];//����Ԫ�ر��浽���λ��
		//seq->arr[0]=x;
		//seq->size++;

		////����2:���ò��뺯��
		//insert(seq,0,x);

		////����3:
		//int i = 0;
		//for(i=seq->size; i>0; i--)//�ƶ�Ԫ��
		//{ 
		//	seq->arr[i] = seq->arr[i-1];
		//}
		//seq->arr[0] = x;//����Ԫ��
		//seq->size++;

		//����4:
		int i = 0;
		for(i=seq->size-1; i>=0; i--)//�ƶ�Ԫ��
		{ 
			seq->arr[i+1] = seq->arr[i];
		}
		seq->arr[0] = x;//����Ԫ��
		seq->size++;
	}   
	printf("����ɹ�\n");
}
void popfront(pseq seq)
{
	assert(seq && seq->size<MAX);
	if(seq->size == 0)
		printf("˳����ѿ�\n");
	else
	{
		//   //����1(���˳����Ԫ����˳���޹�)
		//seq->arr[0]=seq->arr[seq->size-1];//����Ԫ�ر��浽���
		//seq->size--;

		////����2��ֱ�ӵ��ò�������
		//erase(seq,0);

		////����3:
		//int i = 0;
		//for(i=0; i<seq->size-1; i++)//�ƶ�Ԫ��
		//{ 
		//	seq->arr[i] = seq->arr[i+1];
		//}
		//seq->size--;

		//����4:
		int i = 0;
		for(i = 1; i<seq->size; i++)//�ƶ�Ԫ��
		{ 
			seq->arr[i-1] = seq->arr[i];
		}
		seq->size--;
	}   
	printf("ɾ���ɹ�\n");
}
void insert(pseq seq,int pos,Datatype x)
{
	assert(seq && seq->size<MAX);
	if(seq->size>=MAX)
		printf("˳�������\n");
	else
	{
		////����1:
	 //   int i = 0;
		//for(i=seq->size; i>pos; i--)
		//{
		//	seq->arr[i] = seq->arr[i-1];
		//}
		//seq->arr[pos] = x;
		//seq->size++;

		//����2:
	    int i = 0;
		for(i=seq->size-1; i>=pos; i--)
		{
			seq->arr[i+1] = seq->arr[i];
		}
		seq->arr[pos] = x;
		seq->size++;
	}
	printf("����ɹ�\n");
}
void erase(pseq seq,int pos)
{
	assert(seq && seq->size<=MAX);
	if(seq->size==0)
		printf("˳����ѿ�\n");
	else
	{
	    int i = 0;
		for(i=pos; i<seq->size-1; i++)
		{
			seq->arr[i] = seq->arr[i+1];
		}
		seq->size--;
		printf("�����ɹ�\n");
	}
}
int find(pseq seq,Datatype x)
{
	int i = 0;
	assert(seq && seq->size<=MAX);
	for(i=0; i<seq->size; i++)
	{
		if(seq->arr[i] == x)
			return i;//�����״γ���λ�õ��±�
	}
	return -1;
}
void remmove(pseq seq,Datatype x)
{
	assert(seq && seq->size<=MAX);
	if(seq->size==0)
		printf("˳����ѿ�\n");
	else
	{
		int i = 0;
	    for(i=0; i<seq->size; i++)
		{
			if(seq->arr[i]==x)
			{
				int j = 0;
				for(j=i; j<seq->size; j++)//�ƶ�Ԫ��
				{
					seq->arr[j]=seq->arr[j+1];
				}
			}
		}
		seq->size--;
		printf("ɾ���ɹ�\n");
	}

}
void remmove_all(pseq seq,Datatype x)
{
	assert(seq && seq->size<=MAX);
	if(seq->size==0)
		printf("˳����ѿ�\n");
	else
	{
	 //   //����1:��һ��ɾһ��
		//int i = 0;
		//int count = 0;
		//for(i=0; i<seq->size; ++i)
		//{
		//	if(seq->arr[i] == x)
		//	{
		//		int j = 0;
		//		for(j=i; j<seq->size; j++)//�ƶ�Ԫ��
		//		{
		//			seq->arr[j]=seq->arr[j+1];
		//		}
		//		seq->size--;
		//	}
		//}

		//����2��
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
		printf("ɾ���ɹ�\n");
}
void empty(pseq seq)
{
	assert(seq && seq->size<MAX);
	seq->size=0;
	printf("��ճɹ�\n");
}