#include<stdio.h>

void stringCopy(char[], char[]);

int main(void)
{
	char str2[] = "COMPUTER";
	char str1[] = "UNIX";

	printf("é¿çsëO\n");
	printf("%s\n", &str1);
	printf("%s\n", &str2);

	stringCopy(str1, str2);

	printf("é¿çså„\n");
	printf("%s\n", &str1);
	printf("%s\n", &str2);


	return 0;
}

void stringCopy(char str1[], char str2[])
{
	int i;
	int k;

	for (i = 0; str2[i] != '\0'; i++) {
		str1[i] = str2[i];
	}

	for (k = i; str1[k] != '\0'; k++) {
		str1[k] = '\0';
	}
}