#include <stdio.h>

int main() {
    int num1 = 12;
    int num2 = 4;
    char op = '+'; // Change ce signe pour tester (+, -, *, /, %, &, |, ~)

    switch (op) {
        case '+': printf("%d\n", num1 + num2); break;
        case '-': printf("%d\n", num1 - num2); break;
        case '*': printf("%d\n", num1 * num2); break;
        case '/': printf("%d\n", num1 / num2); break;
        case '%': printf("%d\n", num1 % num2); break;
        case '&': printf("%d\n", num1 & num2); break;
        case '|': printf("%d\n", num1 | num2); break;
        case '~': printf("%d\n", ~num1); break;
        default: printf("Erreur\n");
    }

    return 0;
}

