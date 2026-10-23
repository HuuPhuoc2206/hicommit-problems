#include <stdio.h>

int main(){
  float a, b, bmi;
  scanf("%f %f", &a, &b);
  
    bmi = a / ((b / 100) * (b / 100));
  
  if (bmi < 18.5) {
        printf("UNDERWEIGHT\n");
    }
  return 0;
}