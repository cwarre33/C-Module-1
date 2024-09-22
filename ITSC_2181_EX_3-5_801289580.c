#include <stdio.h>
#include <stdlib.h>

int main(){
  int i;
  printf("Question 1: \n");
  for (i = 0; i < 20; i++){
    printf("%d \n", i * 2);
  }

  printf("Question 2: \n");
  for (i = 49; i > 20; i = i-2){
    printf("%d \n", i);
  }
  return 0;
}