#include <stdio.h>

int main()
{
	int i, j, k, count = 0;
	for(i = 1; i <= 4; ++i)							    //三重循环组成三位数 
		for(j = 1; j <= 4; ++j)
			for(k = 1; k <= 4; ++k)
				if(i != j && j != k && k != i)		//判断是否有重复 
				{
					printf("%d%d%d\n", i, j, k);	  //输出一个不重复的三位数 
					++count;						            //计数 
				}
	printf("一共可组成%d个无重复的三位数", count);	//输出满足要求的个数 
	return 0;
 } 
