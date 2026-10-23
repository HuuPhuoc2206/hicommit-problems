#include <stdio.h>

int main() {
  float dtb,drl;
  scanf("%f", &dtb);
  scanf("%f", &drl);
  
  if(dtb >= 9.0 && drl >= 90){
    printf("HOC_BONG_XUAT_SAC");
  }
  else if(dtb >= 8.0 || dtb < 9.0 && drl >= 80 ||drl < 90 ){
    printf("HOC_BONG_GIOI");
  }
  else if(dtb >= 9.0 && drl >= 80 ||drl < 90 ){
    printf("HOC_BONG_GIOI");
  }
  
  return 0;
}