#include <stdio.h>

void min_num_first(int *a, int *b);

int main()
{
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	min_num_first(&x, &y);
	min_num_first(&x, &z);
	min_num_first(&y, &z);
	printf("%d %d %d", x, y, z);
	return 0;
}

void min_num_first(int *a, int *b)
{
	int temp;
	if(*a > *b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
}
