#include <stdio.h>
#include <math.h>

int main()
{
	long n;
	int s1, s2;
	for(int i = 1; i <= 100000; ++i)
	{
		s1 = sqrt(i + 100);
		s2 = sqrt(i + 168);
		if((s1*s1 == i + 100) && (s2*s2 == i + 168))
			printf("%ld\n", i);
	}
	return 0;
}
