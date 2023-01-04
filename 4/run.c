#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    char i;
 
    for (i = 1; i <= 50; i++) {
        printf("%15d", srand(time(NULL)));
        if (i % 5 == 0) printf("\n");
    }        
}