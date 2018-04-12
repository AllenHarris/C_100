#include <stdio.h>

int main()
{
	for (int i = 50; i > 5; i -= 5)
	{
		for (int j = i; j > 0; --j)
			printf("*");
		printf("\n");
	}

	for (int i = 5; i <= 50; i += 5)
	{
		for (int j = i; j > 0; --j)
			printf("*");
		printf("\n");
	}
	return 0;
}
