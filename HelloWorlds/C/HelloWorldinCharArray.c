#include <stdio.h>
#include <string.h>

int main() {
    char arr[] = "Hello, World!";

    for (int i = 0; i < strlen(arr); i++) {
        printf("%c", arr[i]);
    }
    printf("\n");

    return 0;
}