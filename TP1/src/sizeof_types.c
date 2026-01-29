#include <stdio.h>

int main() {
    printf("char: %zu\n", sizeof(char));
    printf("short: %zu | unsigned: %zu\n", sizeof(short), sizeof(unsigned short));
    printf("int: %zu | unsigned: %zu\n", sizeof(int), sizeof(unsigned int));
    printf("long: %zu | unsigned: %zu\n", sizeof(long), sizeof(unsigned long));
    printf("long long: %zu | unsigned: %zu\n", sizeof(long long), sizeof(unsigned long long));
    
    printf("float: %zu\n", sizeof(float));
    printf("double: %zu\n", sizeof(double));
    printf("long double: %zu\n", sizeof(long double));
    return 0;
}

