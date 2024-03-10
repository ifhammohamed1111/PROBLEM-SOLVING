#include <stdio.h>

int main() {
    int a = 32, b = 76;

    int *p = &a;
    a = b;
    b = *p;

    printf("a => %d \nb => %d", a, b);



    return 0;
}
