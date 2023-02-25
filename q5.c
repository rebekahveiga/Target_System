#include <stdio.h>
#include <string.h>

int main() {
    // string com tamanho máximo de 100 caracteres
    char string_original[100];
    
    printf("Digite uma string para ser invertida: ");
    fgets(string_original, 100, stdin);
    
    // Remove o caractere '\n' 
    string_original[strcspn(string_original, "\n")] = '\0';
    
    // Calcula o tamanho da string original
    int tamanho_string = strlen(string_original);
    
    // Cria uma string vazia para armazenar os caracteres invertidos
    char string_invertida[tamanho_string + 1];
    
    // Percorre a string original do último ao primeiro caractere, adicionando cada caractere à string invertida
    for (int i = tamanho_string - 1; i >= 0; i--) {
        string_invertida[tamanho_string - 1 - i] = string_original[i];
    }
    
    // Adiciona o caractere nulo de final de string na string invertida
    string_invertida[tamanho_string] = '\0';
    
    // Imprime a string invertida
    printf("A string invertida é: %s", string_invertida);
    
    return 0;
}
