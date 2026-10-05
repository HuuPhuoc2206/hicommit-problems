#include <stdio.h>

int main() {
  int distance;
  long order_value;

  scanf("%d %ld", &distance , &order_value );

  if(distance <= 0 || order_value <=0){
    prinft("INVALID");
  }
  if(order_value >= 50000 && distance < 15 ){
    prinft("Free");
  }
  if(distance >= 1 && distance <=5){
    prinft("15000");
  }
  if(distance >= 6 && distance <=15){
    prinft("25000");
  }
  return 0;
}