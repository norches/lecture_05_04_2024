#include <stdlib.h>

int main() {
    int *ptr = malloc(1000 * sizeof(int));

    printf("%d\n", ptr[0]);
    return 0;
}