#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
void sz(char a[], int len) {
	for (int i = 0; i < len; i++)
	{
		printf("%c,", a[i]);
	}
}

int main()
{
	int len, a[10];
	char s[10];
	printf("plz inpuut an int below 5 bits:");
	scanf("%s", &s);
	len = strlen(s);
	if (s[0] == '-') printf("it is a nagetive num");
	else if (len > 5) printf("it is over 5 bits");
	else {
		for (int i = 0; i < len; i++)
		{
			a[i] = s[i] - 48;
		}
		printf("output: %s is a %d bits int and every bit is", s, len);
		sz(s, len);
		printf("back order is");
		for (int i = len - 1; i >= 0; i--)
		{
			printf("%d", a[i]);
		}
	}

		return 0;
}
