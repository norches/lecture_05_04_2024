#include <stdio.h>

int main() {
    int *ptr = NULL;
    *ptr = 10;  // dereferencing a null pointer

    printf("%d\n", *ptr);
    return 0;
}