#include <stdio.h>
#include <string.h>

int main() {
    char string[100], tmp;
    int i, len;

    printf("Enter a word: ");
    scanf("%s", string);

    len = strlen(string);

    // Inversion
    for (i = 0; i < len / 2; i++) {
        tmp = string[i];
        string[i] = string[len - 1 - i];
        string[len - 1 - i] = tmp;
    }

    printf("Reversed word: %s\n", string);

    return 0;
}
