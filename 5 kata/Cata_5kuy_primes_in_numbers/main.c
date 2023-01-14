#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char* factor(int lst);

int main() {
    int num = 7775460;
    printf("result is = %s\n" ,factor(num));
    return 0;
}
char* factor(int lst) {
    int divisor = 2, x=0;
    int n = lst; 
    char* str = malloc(1*sizeof(char));

    int *list = (int *) calloc(1, sizeof(int));
    while (divisor <= n) {
        if ((n % divisor) == 0) {
            list[x] = divisor;
            n=n/divisor;
            x++;
            list = (int *) realloc(list, (x+1)*sizeof(int));
        } else {
            divisor++;
        }
    }

    int res = 0, add = 0;
    for (int i = 0; i < x; i++) {
        if ((res!=0) && (res == list[i])) {
            add++;
        } else if ((res!=0) && (res != list[i])) {
            if (add != 0) {
                str =(char *) realloc(str, (strlen(str)*sizeof(char))+7);
                sprintf(str, "%s(%d**%d)", str,res, add+1);
            } else {
                str =(char *) realloc(str, (strlen(str)*sizeof(char))+5);
                sprintf(str, "%s(%d)", str, res);
            }
            res = list[i];
            add = 0;
        } else {
            res = list[i];
            add = 0;
        }
    }
    str = (char *) realloc(str, (strlen(str)*sizeof(char))+6);
    sprintf(str, "%s(%d)", str, res);
    free(list);
    return str;
}

