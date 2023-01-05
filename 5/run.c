#include <stdio.h>          
#include <stdlib.h>
#include <string.h> 
#include <ctype.h>

#define N 5

char solution(const char *camelCase) {
    char *result;
    int n = 0;
    int len = strlen(camelCase);
    result = malloc(len);
    while (1) {
        if (camelCase[n] == '\0') {
            break;
        }
        else {
            if ((isupper(camelCase[n])) && (n!=0)) {
                len = strlen(camelCase)+1;
                realloc(result ,len);
                for (int j = 0; j < len; j++) {
                    if (j < n) {
                        result[j] = camelCase[j];
                    } 
                    else if (j == n) {
                        result[j] = ' ';
                    }
                    else if (j > n) {
                        result[j] = camelCase[j-1];
                    }
                }
            }
            n++;
        }
    }
    printf("%s\n", result);
    return *result;
}

int main() {
    char str[] = "thisIsAVeryLongIdentifierName";  
    solution(str);
}