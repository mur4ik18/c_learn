#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

char* incrementString(char* str);

int main() {
    printf("%s\n", incrementString("wslsiqcbtrqkwmejohx"));
    return 0;
}
void copy_string(char* arr1, char* arr2, size_t num) {
  for (size_t i = 0; i < num; i++) {
    arr1[i] = arr2[i];
  }
}

char* incrementString(char* str)
{
  char* arr = (char *) calloc(strlen(str), sizeof(char));

  if (isdigit(str[strlen(str)-1])) {
    
    if (str[strlen(str)-1] != '9') {
      copy_string(arr, str, strlen(str)-1);
      sprintf(arr, "%s%c", arr, str[strlen(str)-1]+1);
      return arr;

    } else {
      int lol = 0;
      size_t j = 0;
      for (size_t i = strlen(str)-1; i > 0 ; i--) {
        if (isdigit(str[i])) {
          lol++;
        }else {
          break;
        }
      }
      char numbs[lol+1];
      
      for (size_t i = strlen(str)-lol; i <= strlen(str); i++) {
        numbs[j++] = str[i];
      } 
      
      copy_string(arr, str, strlen(str)-lol);
      
      int num = atoi(numbs)+1;
      int count = 0;
      while(num)
      {
          num=num/10;
          count++;
      }
      
      if (count >= lol) {
        sprintf(arr, "%s%d", arr, atoi(numbs)+1);
        return arr;
      } else {
        printf("%d\n", lol);
        char strin[lol-count];
        for (size_t i = 0; i < strlen(strin)-1; i++) {
          strin[i] = '0';
        }
        sprintf(arr, "%s%s%d", arr, strin, atoi(numbs)+1);
        return arr;
      }
      return arr;
    }

    
  } else {
    copy_string(arr, str, strlen(str));
    // printf("%s\n", arr);
    sprintf(arr, "%s%d", arr, 1);
    return arr;
  }
}

