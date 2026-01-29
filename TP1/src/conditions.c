#include <stdio.h>

int main() {
    int somme = 0;

    for (int i = 1; i <= 1000; i++) {
        // 1. Si divisible par 11, on saute (continue)
        if (i % 11 == 0) continue;

        // 2. Si divisible par 5 ou 7, on ajoute
        if (i % 5 == 0 || i % 7 == 0) {
            somme += i; // Raccourci pour : somme = somme + i;
        }

        // 3. Si dépasse 5000, on arrête (break)
        if (somme > 5000) break;
    }

    printf("Somme finale : %d\n", somme);
    return 0;
}
