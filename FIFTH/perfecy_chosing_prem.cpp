#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>

int f(int a, int b) {
    if(!(a >= b ? a % b : b % a)) return a <= b ? a : b ;
    return f((a <= b ? a : b), (a >= b ? a % b : b % a));
}

int main() {
    int a, b, way, temp, M, m;
    scanf("%d%d", &a, &b);
    printf("which way do u wanna finish this problem\n(1 :gcd, 0: beautiful and slow force, 2 gcd in another):");
    scanf("%d", &way);
    if (way == 0) {
    printf("%d", f(a, b));
    }
    else if (way == 1) {
        for (int i = (a < b ? a : b); i > 0; i--) {
            if (a % i == 0 && b % i == 0) {
                printf("%d", i);
                break;
            }
        }
    }
    else {
        M = a >= b ? a : b;
        m = a <= b ? a : b;
        while (m) {
            temp = M % m;
            M = m;
            m = temp;
        }
        printf("%d", M);
    }

    return 0;
}