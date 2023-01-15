#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
char* reverse(char* str);

int main() { 
  char* str = "987429134712934876249385134781395873198472398562384958739845234859234758913759182357398457398474598237459823745928347538";
  char* str1= "835743829547328954732895474893754893753281957319857432958432548937859483265893274891378593187431583942678439217431924789";
  int diff = strlen(str) - strlen(str1);
  str = reverse(str);
  str1 = reverse(str1);
  if (diff >0) {
    for (int i = 0; i<diff; i++) {
      sprintf(str1,"%s0", str1);
    }
  } else if (diff < 0) {
    for (int i = 0; i<(-1*diff); i++) {
      sprintf(str,"%s0", str);
    }
  } 
  char* result= (char *) malloc(strlen(str)+1); 
  int mem = 0;
  for (size_t i = 0; i<strlen(str); i++) {
    int a,b,sum;
    a = str[i]-'0';
    b = str1[i]-'0';
    sum = a+b;
    printf("%d + %d = %d\n", a, b, sum);
    if (mem) {
      sum+=1;
      mem=0;
    }
    if (sum > 9){
      mem = 1;
      sprintf(result, "%s%d",result, (sum-10));
    }else {
      sprintf(result, "%s%d",result, sum);
    }
  }
  if (mem) sprintf(result, "%s%d", result, mem);



  //printf("%s\n%s\n===\n", str, str1);
  printf("%s\n", reverse(result));
  //printf("%s + %s = %s\n", str,str1,reverse(result));
  free(str);
  free(str1);
  free(result);
  return 0;

}


char* reverse(char* str) {
  char* result = (char *) malloc(strlen(str)+1);
  size_t j = strlen(str)-1;
  for (size_t i = 0; i<strlen(str); i++) {
    result[i] = str[j--];
  }
  return result;
}
