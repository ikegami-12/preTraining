#include<stdio.h>
#include<stdlib.h>

struct data
{
	int year;
	int month;
	int day;
	char init_era;
};

void errorCheck(struct data);

int main(void)
{

	struct data y;

	int yymd = 0; 
	int japanese_year = 0; //�a���������


	printf("�N\t");		scanf_s("%d", &y.year);
	printf("��\t");		scanf_s("%d", &y.month);
	printf("��\t");		scanf_s("%d", &y.day);

	yymd = (y.year * 10000) + (y.month * 100) + y.day;
	//printf("%d\n", yymd);

	//�G���[����
	errorCheck(y);

	/*****�ݖ�Ŗ���Ă��镔��*****/
	if (18680125 <= yymd && yymd <= 19120729) //����
	{
		japanese_year = y.year - 1868 + 1;
		y.init_era = 'M';
		printf("%c %d�N\t%d��\t%d��\n", y.init_era, japanese_year, y.month, y.day);
	}
	else if (19120730 <= yymd && yymd <= 19261224) //�吳
	{
		japanese_year = y.year - 1912 + 1;
		y.init_era = 'T';
		printf("%c %d�N\t%d��\t%d��\n", y.init_era, japanese_year, y.month, y.day);
	}
	else if (19261225 <= yymd && yymd <= 19890107) //���a
	{
		japanese_year = y.year - 1926 + 1;
		y.init_era = 'S';
		printf("%c %d�N\t%d��\t%d��\n", y.init_era, japanese_year, y.month, y.day);
	}
	else if (19890108 <= yymd && yymd <= 20190431) //����
	{
		japanese_year = y.year - 1989 + 1;
		y.init_era = 'H';
		printf("%c %d�N\t%d��\t%d��\n", y.init_era, japanese_year, y.month, y.day);
	}
	else
	{
		printf("1868�N01��25������2019�N04��31���̊Ԃ��w�肵�Ă��������B\n");
	}
	return 0;
}


void errorCheck(struct data y) {

	//13���ȍ~���w�肳�ꂽ�Ƃ��A�G���[��Ԃ��B
	if (y.month > 12)
	{
		printf("���݂��Ȃ����ɂ����w�肵�Ă��܂��B\n");
		exit(1);
	}
	//32���ȍ~�����͂��ꂽ�Ƃ��A�G���[��Ԃ��B
	if (y.day > 31)
	{
		printf("���݂��Ȃ����ɂ����w�肵�Ă��܂��B\n");
		exit(1);
	}
	//4���A�U���A�X���A�P�P���ɂ����āA30���ȍ~�����͂��ꂽ�Ƃ��A�G���[��Ԃ��B
	if (y.month == 4 || y.month == 6 || y.month == 9 || y.month == 11)
	{
		if (y.day > 30) {
			printf("���݂��Ȃ����ɂ����w�肵�Ă��܂��B\n");
			exit(1);
		}
	}
	//�[�N���l�����ĂQ���̃G���[�������s��
	if (y.month == 2)
	{
		if (y.year % 4 == 0 && y.year % 100 != 0)
		{
			if (y.day > 29)
			{
				printf("���݂��Ȃ����ɂ����w�肵�Ă��܂��B\n");
				exit(1);
			}
		}
		else
		{
			if (y.day > 28)
			{
				printf("���݂��Ȃ����ɂ����w�肵�Ă��܂��B\n");
				exit(1) ;
			}
		}
	}

}