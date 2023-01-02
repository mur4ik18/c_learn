#include <stdio.h>
#include <stdlib.h>

char get_second_char(char str[]){
    for (int i=1; str[i] != '\0'; i++) {
        if (str[i-1] == ' ') {
            return str[i];
        }
    }
    return "";
} 
int main() {
    // char str[] = "Sam Harris";
    // char result[] = ;
    int pork[] = {1,2,3}; 
    printf("%s\n", pork);
    // strchr
    // space = strchr(full_name, ' ');
    return 0;
}