#include <stdio.h>
#define LEN 100

int main() {
    char arr[LEN];

    char input;
    int c = 0;
    while(scanf("%c", &arr[c]) != EOF) {
        c++;
    }
    for (int i = 0; i < c-1; i++) {
        printf("%c", arr[i]);
    }
    
    return 0;
}