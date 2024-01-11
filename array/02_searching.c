// Find the items index

#include <stdio.h>

int main() {
    int LA[] = {1, 3, 5, 7, 8};
    int len = sizeof(LA) / sizeof(LA[0]);
    int item = 5;
    int j = 0;

    printf("The original array elements are :\n");
    for (int i = 0; i < len; i++) {
        printf("LA[%d] = %d \n", i, LA[i]);
    }

    while (j < len) {
        if (LA[j] == item) {
            break;
        }
        j += 1;
    }

    printf("Found element %d at position %d\n", item, j);

    return 0;
}