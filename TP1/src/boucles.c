#include <stdio.h>

int main() {
    int n = 5;
    int i = 1;

    while (i <= n) {      // Tant qu'on n'a pas fini les lignes
        int j = 1;
        while (j <= i) {  // Tant qu'on n'a pas fini la colonne
            if (j == 1 || j == i || i == n)
                printf("* ");
            else
                printf("# ");
            j++; // On avance dans la colonne
        }
        printf("\n");
        i++; // On avance dans la ligne
    }
    return 0;
}
