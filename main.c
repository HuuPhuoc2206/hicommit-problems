#include <stdio.h>

int main() {
    double dtb, drl;
    scanf("%lf %lf", &dtb, &drl);

    int hl, rl;

    
    if (dtb >= 9.0) {
        hl = 3;
    } else if (dtb >= 8.0) {
        hl = 2; 
    } else if (dtb >= 7.0) {
        hl = 1; 
    } else {
        hl = 0; 
    }

    
    if (drl >= 90.0) {
        rl = 3;
    } else if (drl >= 80.0) {
        rl = 2;
    } else if (drl >= 70.0) {
        rl = 1; 
    } else {
        rl = 0; 
    }

    
    if (hl == 3 && rl == 3) {
        printf("HOC_BONG_XUAT_SAC\n");
    } else if ((hl == 2 && (rl == 2 || rl == 3)) || (hl == 3 && rl == 2)) {
        printf("HOC_BONG_GIOI\n");
    } else if ((hl == 1 && (rl == 1 || rl == 2 || rl == 3)) || (hl == 2 && rl == 1) || (hl == 3 && rl == 1)) {
        printf("HOC_BONG_KHA\n");
    } else {
        printf("KHONG_DAT\n");
    }

    return 0;
}
