#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>

int main() {
    srand(time(NULL));
    char chars[] = "abcdefghijklmnopqrstuvwxyz";
    int nchars = strlen(chars);
    while (true) {
        int length;
        printf("Length: ");
        scanf("%d", &length);
        int i;
        for (i = 0; i < length; i++) {
            printf("%c", chars[(int) ((rand() / ((double) RAND_MAX + 1)) * nchars)]);
        }
        puts("");
    }
}