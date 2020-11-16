#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	int d = 1, e = 1;
	double FH, MH, gh, bh;
	char sex, ex, diet;
	printf("dad's height:");
	scanf("%lf", &FH);
	printf("mom's height:");
	scanf("%lf", &MH);
	getchar();
	printf("ur sex:");
	scanf("%c", &sex);
	getchar();
	printf("do u like sports:");
	scanf("%c", &ex);
	getchar();
	printf("do u have balance diet:");
	scanf("%c", &diet);
	gh = (FH * 0.923 + MH);
	bh = (FH + MH) * 0.54;
	if (ex == 'T') e = 1.02;
	if (diet == 'T') d = 1.015;
	if (sex == 'M') { printf("%.lf\n", (bh * e * d)); }
	else { printf("%.lf\n", (gh * e * d)); }
	return 0;
}
