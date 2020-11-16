#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>

int f(int a, int b) {
    if(!(a > b ? a % b : b % a)) return a < b ? a : b ;
    return f((a < b ? a : b), (a > b ? a % b : b % a));
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    for (int i = (a < b ? a : b); i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            printf("%d", i);
            break;
        }
    }

    return 0;
}