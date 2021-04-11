#include<stdio.h>


struct year
{
	char init_era[2];	//年号のイニシャルを格納
	int number;	//和暦何年かを格納
};


int main(void)
{
	struct year y;	//構造体の定義
	int chrisitian_era = 0;	//西暦の初期化

	printf("年号\t");	scanf_s("%s", y.init_era, 2);
	printf("年\t");		scanf_s("%d", &y.number);


	//条件分岐
	if (y.init_era[0] == 'H') 
	{
		if (y.number > 31) { printf("存在しない和暦を指定しています。\n"); return 0; }
		chrisitian_era = 1989 - 1 + y.number;
	}
	else if (y.init_era[0] == 'S') 
	{
		if (y.number > 64) { printf("存在しない和暦を指定しています。\n"); return 0; }
		chrisitian_era = 1926 - 1 + y.number;
	}
	else if (y.init_era[0] == 'T') 
	{
		if (y.number > 15) { printf("存 在しない和暦を指定しています。\n"); return 0; }
		chrisitian_era = 1912 - 1 + y.number;
	}
	else if (y.init_era[0] == 'M') 
	{
		if (y.number > 45) { printf("存在しない和暦を指定しています。\n"); return 0; }
		chrisitian_era = 1868 - 1 + y.number;
	}
	else 
	{
		printf("不適な年号が入力されています。\n"); return 0;
	};

	printf("西暦\t%d年\n", chrisitian_era);

	return 0;
}