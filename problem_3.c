#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);

  for (int i = 0; i < t; i++) {
    int m1, m2, d;
    scanf("%d %d %d", &m1, &m2, &d);
    int j;
    j = d * m1 / (m1 + m2) - d;
    int final = j * (-1);
    printf("%d\n", final);
  }

  return 0;
}