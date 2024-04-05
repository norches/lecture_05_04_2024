#include <stdio.h>

int main() {
    int arr[5];
    arr[10] = 50;  // out-of-bounds memory access
    printf("%d\n", arr[10]);
    return 0;
}