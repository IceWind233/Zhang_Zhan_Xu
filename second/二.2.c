#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int fc(float x)
{
	float y = 0;
	y = (x - 32.)*(5. / 9);

	return y;
}


int main()
{
	float f, c;
	scanf("%f", &f);
	c = fc(f);
	printf("%d", (int)c);
	return 0;
}

