#include <stdio.h>
#define LEN 13

int main() {
    int arr[] = {72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33};

    for (int i = 0; i < LEN; i++) {
        printf("%c", (char)arr[i]);
    }
    printf("\n");

    return 0;
}