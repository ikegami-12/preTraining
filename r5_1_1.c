#include<stdio.h>

int main(void)
{

	int i, count = 0;
	char str[] = "UNIX";

	for (i = 0; str[i] != '\0'; i++) {
		count++;
	}

	printf("%sは%d文字です\n", &str, count);

	return 0;
}