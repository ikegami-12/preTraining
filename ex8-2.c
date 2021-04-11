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
	int japanese_year = 0; //和暦を初期化


	printf("年\t");		scanf_s("%d", &y.year);
	printf("月\t");		scanf_s("%d", &y.month);
	printf("日\t");		scanf_s("%d", &y.day);

	yymd = (y.year * 10000) + (y.month * 100) + y.day;
	//printf("%d\n", yymd);

	//エラー処理
	errorCheck(y);

	/*****設問で問われている部分*****/
	if (18680125 <= yymd && yymd <= 19120729) //明治
	{
		japanese_year = y.year - 1868 + 1;
		y.init_era = 'M';
		printf("%c %d年\t%d月\t%d日\n", y.init_era, japanese_year, y.month, y.day);
	}
	else if (19120730 <= yymd && yymd <= 19261224) //大正
	{
		japanese_year = y.year - 1912 + 1;
		y.init_era = 'T';
		printf("%c %d年\t%d月\t%d日\n", y.init_era, japanese_year, y.month, y.day);
	}
	else if (19261225 <= yymd && yymd <= 19890107) //昭和
	{
		japanese_year = y.year - 1926 + 1;
		y.init_era = 'S';
		printf("%c %d年\t%d月\t%d日\n", y.init_era, japanese_year, y.month, y.day);
	}
	else if (19890108 <= yymd && yymd <= 20190431) //平成
	{
		japanese_year = y.year - 1989 + 1;
		y.init_era = 'H';
		printf("%c %d年\t%d月\t%d日\n", y.init_era, japanese_year, y.month, y.day);
	}
	else
	{
		printf("1868年01月25日から2019年04月31日の間を指定してください。\n");
	}
	return 0;
}


void errorCheck(struct data y) {

	//13月以降が指定されたとき、エラーを返す。
	if (y.month > 12)
	{
		printf("存在しない日にちを指定しています。\n");
		exit(1);
	}
	//32日以降が入力されたとき、エラーを返す。
	if (y.day > 31)
	{
		printf("存在しない日にちを指定しています。\n");
		exit(1);
	}
	//4月、６月、９月、１１月において、30日以降が入力されたとき、エラーを返す。
	if (y.month == 4 || y.month == 6 || y.month == 9 || y.month == 11)
	{
		if (y.day > 30) {
			printf("存在しない日にちを指定しています。\n");
			exit(1);
		}
	}
	//閏年を考慮して２月のエラー処理を行う
	if (y.month == 2)
	{
		if (y.year % 4 == 0 && y.year % 100 != 0)
		{
			if (y.day > 29)
			{
				printf("存在しない日にちを指定しています。\n");
				exit(1);
			}
		}
		else
		{
			if (y.day > 28)
			{
				printf("存在しない日にちを指定しています。\n");
				exit(1) ;
			}
		}
	}

}