#include<stdio.h>

struct Arr
{
	int * pBase;
	int len;
	int cnt;
};

void init_arr(struct Arr * pArr, int length);
bool append_arr();
bool insert_arr();
bool delete_arr();
int get();
bool is_empty();
bool is_full();
void sort_arr();
void show_arr();
void inversion_arr();

int main()
{
	struct Arr arr;

	init_arr(&arr, 6);

	return 0;
}

void init_arr(struct Arr * pArr, int length)
{
	pArr->pBase = (int *)malloc(sizeof(int)*length);
	if (NULL == pArr->pBase)
	{
		printf("¶¯Ì¬ÄÚ´æ·ÖÅäÊ§°Ü£¡\n");
		exit(-1);
	}
	else
	{
		pArr->len == length;
		pArr->cnt == 0;
	}
	return 0;
}

void show_arr()
{

}