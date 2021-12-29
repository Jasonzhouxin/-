#include<stdio.h>

struct Arr
{
	int * pBase;
	int len;
	int cnt;
};

int main()
{
	struct Arr arr;
	arr.cnt = 1;
	printf("%d", arr.cnt);

	return 0;
}