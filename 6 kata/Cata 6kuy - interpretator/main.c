#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void parse(const char *program);
int main() {
    parse("iiisdoso");
    return 0;
}
int parse(const char *program) {
    int num = 0, save_count = 0;
    int* result[] = (int *) calloc(1, sizeof(int));
    
    for (int i = 0; i < strlen(program); i++){
        switch (program[i])
        {
        case 'i':
            num++;
            break;
        case 'd':
            num--;
            break;
        case 's':
            num = num * num;
            break;
        case 'o':
            if (save_count> 0) {
                result = (int *) realloc((save_count+1)*sizeof(int));
                result[save_count] = num;
            } else {
                result[save_count] = num;
            }
            save_count++;
            num;
            break;
        default:
            break;
        }
    }
    return result;
}