#include <stdio.h>

int main() {
  int k;
  long long tien;

  scanf("%d", &k);

  if (k <= 50) {
        tien = k * 1678;
    }
    else if (k <= 100) {
        tien = 50 * 1678
             + (k - 50) * 1734;
    }
  else if (k <= 200) {
        tien = 50 * 1678
             + 50* 1734
             + (k - 100) * 2014;
    }
  else if (k <= 300) {
      tien = 50* 1678
           + 50* 1734
           + 100* 2014
           + (k - 200) * 2536;
  }
  else if (k <= 400) {
      tien = 50* 1678
           + 50* 1734
           + 100* 2014
           + 100* 2536
           + (k - 300) * 2834;
  }
  else {
          tien = 50LL * 1678
               + 50LL * 1734
               + 100LL * 2014
               + 100LL * 2536
               + 100LL * 2834
               + (k - 400LL) * 2927;
      }

    printf("%lld\n", tien);
return 0;
}
