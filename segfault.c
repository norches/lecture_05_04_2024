#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    /*




















    */
    arr[10] = 50;  // out-of-bounds memory access
    printf("%d\n", arr[10]);
    return 0;
}