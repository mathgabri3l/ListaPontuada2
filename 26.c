#include <stdio.h>

int main() {
    int i;

    printf("Números de 1000 a 1999 que divididos por 11 têm resto 5:\n");

    for (i = 1000; i <= 1999; i++) {
        if (i % 11 == 5) {
            printf("%d\n", i);
        }
    }

    return 0;
}
