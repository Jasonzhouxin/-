#include<stdio.h>

struct Arr
{
	int * pBase;
	int len;
	int cnt;
};

void init_arr(struct Arr * pArr, int length);
//bool append_arr();
//bool insert_arr();
//bool delete_arr();
//int get();
//bool is_empty();
//bool is_full();
//void sort_arr();
void show_arr(struct Arr * pArr);
//void inversion_arr();

int main()
{
	struct Arr arr;

	init_arr(&arr, 6);
	show_arr(&arr);

	return 0;
}

void init_arr(struct Arr * pArr, int length)
{
	pArr->pBase = (int *)malloc(sizeof(int)*length);
	if (NULL == pArr->pBase)
	{
		printf("动态内存分配失败！\n");
		exit(-1);
	}
	else
	{
		pArr->len == length;
		pArr->cnt == 0;
	}
	return 0;
}

void show_arr(struct Arr * pArr)
{
	if (0 == pArr->cnt)
	{
		printf("数组为空！\n");
	}
	else
	{
		for (int i = 0; i < pArr->cnt; i++)
			printf("%d", pArr->pBase[i]);
	}
}