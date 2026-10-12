
#include <stdio.h>

int main() {
    long long a, b, c, max;

    scanf("%Ld %Ld %Ld", &a, &b, &c);

    max = a;

    if (b > max) {
        max = b;
    }

    if (c > max) {
        max = c;
    }

    printf("%Ld\n", max);

    return 0;
}
