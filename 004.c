#include <stdio.h>

int caldays(int year, int month, int day);      //计算天数的函数声明

int main()
{
	int year, month, day;
	printf("请输入日期（格式为“year.month.day”）:");
	scanf("%d.%d.%d", &year, &month, &day);
	int days = 0;
	days = caldays(year, month, day);
	printf("输入的日期是%d年的第%d天\n", year, days);
	return 0;
}

int caldays(int year, int month, int day)       //计算天数的函数
{
	int days = 0, flag = 0;
	switch(month)
	{
		case 1: days = 0; break;
		case 2: days = 31; break;
		case 3: days = 59; break;
		case 4: days = 90; break;
		case 5: days = 120; break;
		case 6: days = 151; break;
		case 7: days = 181; break;
		case 8: days = 212; break;
		case 9: days = 243; break;
		case 10: days = 273; break;
		case 11: days = 304; break;
		case 12: days = 334; break;
		default:printf("日期输入错误");break;
	}
	days += day;

	if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) 
		flag = 1;                           //若为闰年，则flag置为1

	if(month > 2 && flag == 1)              //若为闰年且月份大于2，则天数加1
		++days;

	return days;
}
