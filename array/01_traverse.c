#include <stdio.h>

int main() {
    int marks[] = {5, 7, 9, 11, 13};
    int length = sizeof(marks) / sizeof(marks[0]);

    for (int i = 0; i < length; i++) {
        printf("%d ", marks[i]);
    }
    return 0;
}