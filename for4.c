#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main9() {

    int n, a, b;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        printf("%d", a + b);
        printf("\n");
    }

    return 0;
}
