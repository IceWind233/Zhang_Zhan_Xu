#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

int main() {
	double t, w, h;
	printf("ur weight and ur height:");
	scanf("%lf%lf", &w, &h);
	if (w <= 0 || h <= 0) {
		printf("error!");
	}
	else {
		t = w / (h * h);
		if (t < 18) {
			printf("too thin");
		}
		else if (t > 18 && t < 25) {
			printf("noraml weight");
		}
		else if (t > 25 && t < 27) {
			printf("too heavy");
		}
		else {
			printf("too fat");
		}
	}
	return 0;
}
