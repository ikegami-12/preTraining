#include<stdio.h>
#define MAX_STRING 80
#define MAX_ROW 10

int mystrcmp(char* s1, char* s2);
void mystrcpy(char* s1, char* s2);

int main(void)
{
	int i, j;
	int num_of_string = 0;
	char temp[MAX_STRING];
	char str[MAX_ROW][MAX_STRING];

	for (i = 0; i < MAX_ROW; i++) {
		if (scanf_s("%s", &str[i], MAX_STRING) != 1) {
			break;
		}
		num_of_string++;
	}
	for (i = 0; i < num_of_string; i++) {
		printf("%s\n", str[i]);
	}

	for (i = 0; i < num_of_string - 1; i++) {
		for (j = i; j < num_of_string; j++) {
			if (mystrcmp(str[i], str[j]) > 0) {
				mystrcpy(temp, str[i]);
				mystrcpy(str[i], str[j]);
				mystrcpy(str[j], temp);
			}
		}
	}

	for (i = 0; i < num_of_string; i++) {
		printf("%s\n", str[i]);
	}
	return 0;
}

int mystrcmp(char* s1, char* s2)
{
	while (*s1 == *s2) {
		if (*s1 == '\0') {
			return 0;
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void mystrcpy(char* s1, char* s2)
{
	while ((*s1 = *s2) != '\0') {
		s1++;
		s2++;
	}
}