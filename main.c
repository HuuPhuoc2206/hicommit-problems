#include <stdio.h>

int main() {
  int t;

  scanf("%d", &t );
  
  if( t<=15 ){
    printf("LANH");   
  }
  else if( t>=15 || t<=25 ){
    printf("MAT");
  }
  else if( t>=25 || t<= 35 ){
    printf("NONG");
  }
  eles ( t>35 ){
    printf("RATNONG");
  }
  return 0;
}