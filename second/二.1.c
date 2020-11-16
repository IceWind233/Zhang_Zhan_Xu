#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int x;
	int b1, b2, b3, b4, b5;
	scanf("%d", &x);
	b5 = (x /10000) % 10;
	b4 = (x / 1000) % 10;
	b3 = (x / 100) % 10;
	b2 = (x / 10) % 10;
	b1 = x % 10;
	printf("the number is%d\n", x);
	printf("its bit is:%d,%d,%d,%d,%d", 
		b5, b4, b3, b2, b1);

	return 0;
}

