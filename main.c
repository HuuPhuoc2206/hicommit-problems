#include <stdio.h>

int main() {
  int distance;
  long order_value;

  scanf("%d %ld", &distance , &order_value );

  if(distance <= 0 || order_value <=0){
    printf("INVALID");
  }
  else if(order_value >= 50000 && distance < 15 ){
    printf("Free");
  }
  else if(distance >= 1 && distance <=5){
    printf("15000");
  }
  else if(distance >= 6 && distance <=15){
    printf("25000");
  }
  else (distance >15){
    printf("40000");
  }
  return 0;
}