#include <stdio.h>

int main() {
    long long int n;
    scanf("%Ld", &n);

    if (n % 2 == 0) {
        printf("CHAN\n");
    } else {
        printf("LE\n");
    }

    return 0;
}
