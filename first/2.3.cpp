#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
int main() {
	int g, s, b, num, num1, num2;
	printf("press num:");
	scanf("%d", &num);
	num1 = fabs(num);
	g = num1 % 10;
	s = (num1/10) % 10;
	b = num1 / 100;
	num2 = b + 10 * s + 100 * g;
	printf("%d", num2);

	return 0;
}

