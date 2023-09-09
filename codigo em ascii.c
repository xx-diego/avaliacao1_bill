#include <stdio.h>

int main() {
    char caracter;

    printf("insira um caractere: ");
    scanf("%c", &caracter);

    printf("Codigo ASCII em decimal: %d\n", caracter);
    printf("Codigo ASCII em hexadecimal: 0x%02X\n", caracter);

    return 0;
}
