#include<stdio.h>

int countLength(char[]);
int main(void)
{

	int count;
	char str[] = "UNIX";

	count = countLength(str);

	printf("%s‚Í%d•¶Žš‚Å‚·\n", &str, count);

	return 0;
}

int countLength(char str[])
{
	int i;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++) {
		count++;
	}

	return count;
}