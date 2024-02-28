#include "stdio.h"

int main() {
  char c;
  int sum = 0;
  char first, last = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      sum += (first - '0') * 10 + (last - '0');
      first = last = 0;
    }
    if (c >= '0' && c <= '9') {
      first = first == 0 ? c : first;
      last = c;
    }
  }
  printf("part1: %d\n", sum);
}
