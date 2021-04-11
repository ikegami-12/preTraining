#include<stdio.h>


struct data
{
	char init_era;	//年号のイニシャルを格納
	int number;	//和暦何年かを格納
};


int main(void)
{
	struct data year;	//構造体の定義
	int chrisitian_era = 0;	//西暦の初期化

	printf("年号\t");	scanf_s("%c", &year.init_era, 1);
	printf("年\t");		scanf_s("%d", &year.number);


	//条件分岐
	if (year.init_era == 'H') 
	{
		if (year.number > 31) { printf("存在しない和暦を指定しています。\n"); return 0; }
		chrisitian_era = 1989 - 1 + year.number;
	}
	else if (year.init_era == 'S') 
	{
		if (year.number > 64) { printf("存在しない和暦を指定しています。\n"); return 0; }
		chrisitian_era = 1926 - 1 + year.number;
	}
	else if (year.init_era == 'T') 
	{
		if (year.number > 15) { printf("存 在しない和暦を指定しています。\n"); return 0; }
		chrisitian_era = 1912 - 1 + year.number;
	}
	else if (year.init_era == 'M') 
	{
		if (year.number > 45) { printf("存在しない和暦を指定しています。\n"); return 0; }
		chrisitian_era = 1868 - 1 + year.number;
	}
	else 
	{
		printf("不適な年号が入力されています。\n"); return 0;
	};

	printf("西暦\t%d年\n", chrisitian_era);

	return 0;
}