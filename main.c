#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char **argv) { 
    int i;
 
    // printf("%d\n", argc);
 
    for (i=0; i < argc; i++)
        puts(argv[i]);
}