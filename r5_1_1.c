#include<stdio.h>

int main(void)
{

	int i, count = 0;
	char str[] = "UNIX";

	for (i = 0; str[i] != '\0'; i++) {
		count++;
	}

	printf("%s‚Í%d•¶Žš‚Å‚·\n", &str, count);

	return 0;
}