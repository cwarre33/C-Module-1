#include <stdio.h>
#include <stdlib.h>

int main(){
  int a = 32, b = 5, c = 8, d =4, e =12;
  
  if (b > c) printf("Part One: true\n");
  else printf("Part One: false\n");

  if ((e / d) + 6) printf("Part Two: true\n");
  else printf("Part Two: false\n");

  if (a -= ((b > c) || (e / d)) + 6) printf("Part Three: true\n");
  else printf("Part Three: false\n");

  printf("Part4: a = 25\n");

  return 0;
}