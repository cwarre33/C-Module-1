#include <stdio.h>
#include <stdlib.h>

int main(){
  int sum = 0;
  int input = 0;

  while (input != -1) {
    
    sum += input;
    printf("Current Sum: %d\n", sum);
    
    printf("Please enter the next number: ");
    scanf("%d", &input);
    
  }
  printf("Done!");
  return 0;
}