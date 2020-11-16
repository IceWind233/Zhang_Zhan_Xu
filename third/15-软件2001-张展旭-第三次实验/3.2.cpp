#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main() {
double a, b, c, x1, x2, res;
	printf("press the expression:");
	scanf("%lfx^2+%lfx+%lf=0", &a, &b, &c);
	if (a == 0) {
		printf("result:%f", -(b / c));
	}
	else if(b*b-4*a*c >=0){
		x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
		x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
		printf("result:x1=%f, x2=%f", x1, x2);
	}
	else {
		res = (-b) / (2 * a);
		x1 = sqrt(-b * b + 4 * a * c);
		x2 = sqrt(-b * b + 4 * a * c);
		printf("result:x1=%f+%fi, x2=%f-%fi", res, x1, res, x2);
	}
	return 0;
}

