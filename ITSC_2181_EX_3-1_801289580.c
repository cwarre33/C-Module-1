#include <stdio.h>
#include <stdlib.h>

int main(){
  char c1;
  char c2;
  float f1;
  int i1;

  printf("Enter two characters, a space, a float, a space, and a decimal:\n");
  scanf(" %c%c %f %d", &c1, &c2, &f1, &i1);
  printf("%c%c\n%f\n%d\n", c1, c2, f1, i1);
  return 0;
}