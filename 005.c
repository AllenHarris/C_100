#include <stdio.h>

void min_num_first(int *p1, int *p2, int *p3);
void swap(int *p, int *q);

int main()
{
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);

	int *p1, *p2, *p3;
	p1 = &x, p2 = &y, p3 = &z;

	min_num_first(p1, p2, p3);

	printf("%d %d %d", x, y, z);
	return 0;
}

void min_num_first(int *p1, int *p2, int *p3)
{
	if (*p1 > *p2)
		swap(p1, p2);
	if (*p1 > *p3)
		swap(p1, p3);
	if (*p2 > *p3)
		swap(p2, p3);
}

void swap(int *p, int *q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}
