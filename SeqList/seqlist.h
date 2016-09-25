#ifndef __SEQLIST_H__
#define __SEQLIST_H__
//#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

#define MAX 10
typedef int Datatype;

typedef struct SeqList
{
	Datatype arr[MAX];
	int size;
}SeqList,*pseq;

void init_seqlist(pseq seq);
void print_seqlist(pseq seq);
void pushback(pseq seq,Datatype x);
void popback(pseq seq);
void pushfront(pseq seq,Datatype x);
void popfront(pseq seq);
void insert(pseq seq,int pos,Datatype x);
void erase(pseq seq,int pos);
int find(pseq seq,Datatype x);
void remmove(pseq seq,Datatype x);
void remmove_all(pseq seq,Datatype x);
void empty(pseq seq);


#endif //__SEQLIST_H__