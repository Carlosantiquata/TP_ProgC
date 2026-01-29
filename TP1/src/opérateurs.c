#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    printf("a + b = %d\n", a + b); // Addition
    printf("a - b = %d\n", a - b); // Soustraction
    printf("a * b = %d\n", a * b); // Multiplication
    printf("a / b = %d\n", a / b); // Division (entière)
    printf("a %% b = %d\n", a % b); // Modulo (le reste)

    // Pour les comparaisons : 1 = VRAI, 0 = FAUX
    printf("a == b ? %d\n", a == b); // Est-ce égal ?
    printf("a > b  ? %d\n", a > b);  // Est-ce plus grand ?

    return 0;
}


