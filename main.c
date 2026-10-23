#include <stdio.h>

int main(){
  float a, b, bmi;
  scanf("%f %f", &a, &b);
  
    bmi = a / ((b / 100) * (b / 100));
  
  if (bmi < 18.5) {
        printf("UNDERWEIGHT\n");
    }
  else if (bmi < 25) {
      printf("NORMAL\n");
  }
  else if (bmi < 30) {
      printf("OVERWEIGHT\n");
  }
  else {
      printf("OBESE\n");
  }
  
  return 0;
}