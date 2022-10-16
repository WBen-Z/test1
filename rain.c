/*����ÿ����ܽ�ˮ������ƽ����ˮ����������ÿ�µ�ƽ����ˮ��*/
#include<stdio.h>
/*һ����·���*/
#define MONTHS 12
/*����*/
#define YEARS 5
int main()
{
	//��2010~2014��Ľ�ˮ�����ݳ�ʼ������
	const float rain[YEARS][MONTHS] = {
		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
		{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
		{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
		{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
		{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2},
	};
	int year, month;
	float subtob, total;
	printf(" YEAR    RAINFALL  (inches)\n");
	for (year = 0, total = 0; year < YEARS; year++)
	{	//ÿһ�꣬�����µ��ܽ�ˮ��
		for (month = 0, subtob = 0; month < MONTHS; month++)
			subtob += rain[year][month];
		printf("%5d %15.1f\n", 2010 + year, subtob);
		total += subtob;	//������ܽ�ˮ��
	}
	printf("\nThe yearly average is %.1f inches.\n\n", total / YEARS);
	printf("MONTHLY AVERAGE:\n\n");
	printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct ");
	printf(" Nov Dec\n");
	for (month = 0; month < MONTHS; month++)
	{	//ÿ����������ܽ�ˮ��
		for (year = 0, subtob = 0; year < YEARS; year++)
			subtob += rain[year][month];
		printf("%4.1f ", subtob / YEARS);
	}
	putchar('\n');
	return 0;
}