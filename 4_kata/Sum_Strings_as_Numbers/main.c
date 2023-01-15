#include <malloc.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char *strsum(const char *a, const char *b);
char* reverse(const char* str);
char* clear(char* str);
int main() {
  char* p =strsum("00001", "0");
  printf("result = %s\n", p);
  free(p);
  return 0;
}




char *strsum(const char *a, const char *b)
{
  int diff = strlen(a) - strlen(b);
  char* str = reverse(a);
  char* str1 = reverse(b);
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
  free(str);
  free(str1);
  return clear(reverse(result));
}

char* reverse(const char* str) {
  char* result = (char *) malloc(strlen(str)+1);
  size_t j = strlen(str)-1;
  for (size_t i = 0; i<strlen(str); i++) {
    result[i] = str[j--];
  }

  return result;
}
char* clear(char* str) {
  char* result = (char*) calloc(strlen(str),sizeof(str));
  if ((str[0]-'0')== 0) {
    size_t i = 0;
    while (1) { 
      if ((str[i]-'0') == 0) {
        i++;
      }
      else{
        break;
      }
    }
    for (; i<strlen(str);i++){
      sprintf(result, "%s%c", result, str[i]);
    }
  } else {
    sprintf(result, "%s", str);
  } 
  free(str);
  return result;
}
