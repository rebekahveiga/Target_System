#include <stdio.h>

int main() {
    int numero, a = 0, b = 1, c;
    int pertence = 0; 
    
    printf("Digite um número: ");
    scanf("%d", &numero);
    
    // Verificação se o número pertence à sequência de Fibonacci
    while (b < numero) {
        c = a + b;
        a = b;
        b = c;
    }
    if (b == numero) {
        pertence = 1; // O número pertence à sequência
    }
    
    if (pertence) {
        printf("%d pertence à sequência de Fibonacci.\n", numero);
    } else {
        printf("%d não pertence à sequência de Fibonacci.\n", numero);
    }
    
    return 0;
}
