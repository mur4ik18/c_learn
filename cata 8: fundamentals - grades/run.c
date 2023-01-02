#include <stdio.h>
#include <stdlib.h>

char get_grade(int a, int b, int c) {  
  int num = (a + b +c)/3;
  printf("%d\n", num);
  if (num >= 90) {
    return 'A';
  } else if (num >= 80) {
    return 'B';
  } else if (num >= 70) {
    return 'C';
  } else if (num >= 60) {
    return 'F';
  } else {
    return 'D';
  } 
}
int main() {
    printf("%c\n", get_grade(58, 60, 70));
    
    return 0;
}