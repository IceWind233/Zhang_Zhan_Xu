#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
int main() {
	char ch[7];
	printf("words(5)") ;
	scanf("%s", ch);
	printf("\ntransfer:");
	for (int i = 0; i < strlen(ch); i++) {
		ch[i] = ch[i] + 4;
		putchar(ch[i]);
	}
	printf("\ntransfer2:%s", ch);
	return 0;
}

