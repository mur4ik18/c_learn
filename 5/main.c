#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 5;

char* solution(const char* camelCase);

int main() {
    char str[] = "thisIsAVeryLongIdentifierName";
    printf("%s\n", solution(str));
}

char* solution(const char* camelCase) {
    size_t len = strlen(camelCase) + 1;
    size_t num_of_spaces = 0;

    for (size_t i = 0; i < len; i++) {
        if (i != 0 && isupper(camelCase[i])) {
            num_of_spaces += 1;
        }
    }

    size_t result_len = len + num_of_spaces;
    char* result = (char*)malloc(result_len);
    size_t last_position = 0;
    size_t x = 0;
    size_t j = 0;


    for (size_t i = 0; i < len; i++) {
        if (i != 0 && isupper(camelCase[i])) {
            result[x] = ' ';
            x++;
            result[x] = camelCase[i];
            x++;
        } else {
            result[x] = camelCase[i];
            x++;
        }
    }    
    return result;
}
