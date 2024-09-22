#include <stdio.h>
#include <stdlib.h>

int main(){
  int grade = 0;
  printf("Enter your numeric grade: ");
  scanf("%d", &grade);
  //char letter_grade;
  
  if (grade >= 90) 
    printf("Your grade is a A\n");
  else if (grade >= 80) 
    printf("Your grade is a B\n");
  else if (grade >= 70) 
    printf("Your grade is a C\n");
  else if (grade >= 60)
    printf("Your grade is a D\n");
  else if (grade <= 60)
    printf("Your grade is a F\n");
  
  return 0;
}