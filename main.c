
#include <stdio.h>

int main() {
    double w, h, bmi;

    scanf("%lf %lf", &w, &h);

    bmi = w * 10000.0 / (h * h);

    if (bmi < 18.5) {
        printf("UNDERWEIGHT\n");
    }
    else if (bmi < 25.0) {
        printf("NORMAL\n");
    }
    else if (bmi < 30.0) {
        printf("OVERWEIGHT\n");
    }
    else {
        printf("OBESE\n");
    }

    return 0;
}
