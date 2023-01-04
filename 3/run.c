#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>

int count();

int main() {
    // malloc(); выделяет в куче место
    // malloc(size*sizeof(int))
    // calloc(); выделяет место в куче и забивает его 0
    // free(); чистит память
    
    int a, b, c;
    // 342+1024 = 1366
    scanf("%d + %d = %d", &a, &b, &c);
    printf("Your answer is %d\n", c);
    
    // static count = 0; не обнуляется, но скрыта для вызова из других файлов
    printf("#%d call\n",count());
    printf("#%d call\n",count());
    printf("#%d call\n",count());
    
    return 0;
}

int count(){
    static count = 1;
    return count++;
}