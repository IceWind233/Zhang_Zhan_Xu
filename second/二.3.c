#define _CRT_SECURE_NO_WARNINGS
#define PI 3.1415
#include<stdio.h>
#include<math.h>
float s(float x)
{
	float y = 0;
	y = PI*x*x;

	return y;
}
float c(float x)
{
	float y = 0;
	y = 2*PI * x;

	return y;
}


int main()
{
	float r, C, S;
	scanf("%f", &r);
	S = s(r);
	C = c(r);
	printf("S=%f\nC=%f",S, C);
	return 0;
}


