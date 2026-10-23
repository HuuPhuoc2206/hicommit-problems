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
return 0;
}
