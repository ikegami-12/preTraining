#include<stdio.h>

int main(void)
{

	int i, count = 0;
	char str[] = "UNIX";

	for (i = 0; str[i] != '\0'; i++) {
		count++;
	}

	printf("%s��%d�����ł�\n", &str, count);

	return 0;
}