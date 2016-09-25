//#define _CRT_SECURE_NO_WARNINGS 1
#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int DataType;

typedef struct ComplexNode
{
	DataType data;
	struct ComplexNode *next;
	struct ComplexNode *random;
}*PComplexNode,ComplexNode;

PComplexNode CreatComplexNode(DataType data)//创建复杂节点
{
	PComplexNode newNode = (PComplexNode)malloc(sizeof(ComplexNode));
	if(NULL == newNode)
	{
		printf("out of memory,\n");
		exit(1);
	}
	newNode->data = data;
	newNode->next = NULL;
	newNode->random = NULL;
	return newNode;
}

PComplexNode CreatComplexList(PComplexNode *ComplexpHead)
{
	PComplexNode n1 = CreatComplexNode(1);
	PComplexNode n2 = CreatComplexNode(2);
	PComplexNode n3 = CreatComplexNode(3);
	PComplexNode n4 = CreatComplexNode(4);
	
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;

	n1->random = n3;
	n2->random = NULL;
	n3->random = n2;
	n4->random = n4;

	*ComplexpHead = n1;
	return *ComplexpHead;
}


void Print(PComplexNode ComplexHead)
{
	PComplexNode CurNode = ComplexHead;
	while(CurNode)
	{
		if(CurNode->random)
		    printf("[%d]:random->[%d]\n",CurNode->data,(CurNode->random)->data);
		else
			printf("[%d]:random->NULL\n",CurNode->data);
		CurNode = CurNode->next;
	}
}

PComplexNode CloneComplexList(PComplexNode pHead)
{
	PComplexNode CurNode = pHead;
	PComplexNode NewNode = NULL;
	PComplexNode NextNode = NULL;
	if(NULL == pHead)
		return NULL;
	//复制每个节点插到其位置之后
	while(CurNode)
	{
		NewNode = CreatComplexNode(CurNode->data);
		NewNode->next = CurNode->next;
		CurNode->next = NewNode;
		CurNode = NewNode->next;
	}

	//给复制的新结点的random赋值
	CurNode = pHead;
	NextNode = NULL;
    while(CurNode)
	{
		NextNode = CurNode->next;
		NextNode->random = CurNode->random;
		CurNode = NextNode->next;
	}

	//拆掉复制的节点
	if(NULL == pHead)
		return NULL;
	NewNode = pHead->next;
	NextNode = NewNode;
	CurNode = NewNode->next;
	pHead->next = CurNode;
	while(CurNode)
	{
		NextNode->next = CurNode->next;
		NextNode = NextNode->next;
		CurNode->next = NextNode->next;
		CurNode = CurNode->next;
	}
	return NewNode;
}

int main()
{
	PComplexNode pNode;
	PComplexNode CopyNode;
	CreatComplexList(&pNode);
	Print(pNode);
	printf("\n");
	CopyNode = CloneComplexList(pNode);
	Print(CopyNode);
	free(pNode);
	free(CopyNode);
	system("pause");
	return 0;
}