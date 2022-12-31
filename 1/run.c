#include <stdio.h>
#include <stdlib.h>

int main()
{
  // int
  // short
  // long
  // unsigned == int != -int
  // unsigned short pop;
  // pop = 0;
  // printf("%d\n", pop);
  
  char ch = 65;
  printf("%c%c/%c%c\n", ch, ch+2,ch+3,ch+2);
  
  double a = 0.0005;
  printf("%f\n", a);
  printf("%g\n", 0.0005);
  printf("%g\n", 0.00005);
  printf("%e\n", 0.0005);

  
  return 0;
}
