#include<stdio.h>

struct Arr
{
	int * pBase;
	int len;
	int cnt;
};

void init_arr();
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

	init_arr();

	return 0;
}

void init_arr()
{

}