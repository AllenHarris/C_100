#include <stdio.h>

int caldays(int year, int month, int day);      //���������ĺ�������

int main()
{
	int year, month, day;
	printf("���������ڣ���ʽΪ��year.month.day����:");
	scanf("%d.%d.%d", &year, &month, &day);
	int days = 0;
	days = caldays(year, month, day);
	printf("�����������%d��ĵ�%d��\n", year, days);
	return 0;
}

int caldays(int year, int month, int day)       //���������ĺ���
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
		default:printf("�����������");break;
	}
	days += day;

	if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) 
		flag = 1;                           //��Ϊ���꣬��flag��Ϊ1

	if(month > 2 && flag == 1)              //��Ϊ�������·ݴ���2����������1
		++days;

	return days;
}
