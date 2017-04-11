/*二维数组中查找（该数组每行从左至右递增，每列从上至下递增）*/
#pragma once
#include <iostream>
using namespace std;

const int ROW = 4;
const int COL = 4;
bool Find(int a[ROW][COL],int key)
{
	if (a && COL>0 && ROW>0)
	{
		int col = COL-1;
		int row = 0;
		while(col >= 0 && row < ROW)
		{
			if (a[row][col] == key)
			{
				return true;
			}
			else if (a[row][col] > key)
			{
				col -= 1;
			}
			else
			{
				row += 1;
			}
		}
	}
	return false;
}


void TestFind()
{
	int array[ROW][COL] = {{1,2,8,9},{2,4,9,12},{4,7,10,13},{6,8,11,15}};
	int data = 5;
	cout<<data<<":"<<Find(array,data)<<endl;//数组中没有的值
	data = 1;
	cout<<data<<":"<<Find(array,data)<<endl;//最大值
	data = 15;
	cout<<data<<":"<<Find(array,data)<<endl;//最小值
	data = 13;
	cout<<data<<":"<<Find(array,data)<<endl;//中间值
	cout<<1<<":"<<Find(NULL,data)<<endl;//空指针
}