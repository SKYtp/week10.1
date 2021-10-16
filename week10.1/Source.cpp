#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
char s[100];
int keep,last;
int big = 0, small = 0;
int main()
{
	printf("Enter string : ");
	scanf("%s", s);
	printf("\n------------------\n");
	last = strlen(s);
	for (int i = 0; i < last; i++)
	{
		if (s[i] >= 65 && s[i] <= 90)
		{
			big++;
		}
		else if (s[i] >= 97 && s[i] <= 122)
		{
			small++;
		}
	}
	printf("Big char : %d \n", big);
	printf("Small char : %d", small);
	return 0;
}