#include <stdio.h>

int main()
{
	long n;
	float bonus, bonus1, bonus2, bonus4, bonus6, bonus10;
	
	bonus1 = 100000 * 0.1;
	bonus2 = bonus1 + 100000 * 0.075;
	bonus4 = bonus2 + 200000 * 0.05;
	bonus6 = bonus4 + 200000 * 0.03;
	bonus10 = bonus6 + 400000 * 0.015;
	
	while(scanf("%ld", &n))     //当输入不为空时，计算奖金
	{
		if(n <= 100000)
			bonus = n * 0.1;
		else if(n <= 200000)
			bonus = bonus1 + (n - 100000) * 0.075;
		else if(n <= 400000)
			bonus = bonus2 + (n - 200000) * 0.05;
		else if(n <= 600000)
			bonus = bonus4 + (n - 400000) * 0.03;
		else if(n <= 1000000)
			bonus = bonus6 + (n - 600000) * 0.015;
		else
			bonus = bonus10 + (n - 1000000) * 0.01;

		printf("奖金bonus = %.2f\n", bonus);
	}
	return 0;
}
