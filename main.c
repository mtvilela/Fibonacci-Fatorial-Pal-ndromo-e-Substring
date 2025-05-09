/*
Matheus Vilela Silveira RM 564989
Maria Eduarda de Aquila Amaral RM 563783
Lucas de Freitas Barbosa, 564685
Marcus Vinicius Vieira Monteiro, 566031
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void fibonacci() {
    int n;
    do {
        printf("Digite a quantidade de termos da sequência de Fibonacci (1 a 50): ");
        scanf("%d", &n);

        if (n < 1 || n > 50) {
            printf("O número digitado não é válido. Tente novamente.\n\n");
        }
    } while (n < 1 || n > 50);

    long long fib[50] = {0, 1};

    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    printf("Sequência de Fibonacci com %d números:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%lld\n", fib[i]);
    }
    printf("\n");
}

void fatoriais() {
    int n;
    do {
        printf("Digite um número inteiro (1 a 20): ");
        scanf("%d", &n);

        if (n < 1 || n > 20) {
            printf("O número digitado não é válido. Tente novamente.\n\n");
        }
    } while (n < 1 || n > 20);

    long long fat[20] = {1};

    for (int i = 1; i < n; i++) {
        fat[i] = fat[i - 1] * (i + 1);
    }

    printf("Resultado dos fatoriais até %d:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d! = %lld\n", i + 1, fat[i]);
    }
    printf("\n");
}

void verificarPalindromo() {
    char texto[101];
    int inicio = 0, fim;
    bool ehPalindromo = true;

    printf("Digite uma palavra: ");
    scanf("%100s", texto);

    fim = strlen(texto) - 1;

    while (inicio < fim) {
        if (texto[inicio] != texto[fim]) {
            ehPalindromo = false;
            break;
        }
        inicio++;
        fim--;
    }

    if (ehPalindromo) {
        printf("\"%s\" é um palíndromo.\n\n", texto);
    } else {
        printf("\"%s\" NÃO é um palíndromo.\n\n", texto);
    }
}

void substring() {
    char str1[101], str2[101];
    printf("Digite a primeira string: ");
    scanf("%100s", str1);
    printf("Digite a segunda string: ");
    scanf("%100s", str2);
    
    if (strstr(str1, str2) != NULL) {
        printf("A segunda string está contida na primeira.\n");
    } else {
        printf("A segunda string NÃO está contida na primeira.\n");
    }
}


int main() {
    int escolha;
    char buffer[100]; // Buffer para limpar entradas inválidas

    while (1) {
        printf("========== MENU ==========\n");
        printf("1: Fibonacci\n");
        printf("2: Fatoriais\n");
        printf("3: Palíndromo\n");
        printf("4: Substring\n");
        printf("0: Sair\n");
        printf("==========================\n");
        printf("Escolha uma opção: ");

        
        if (scanf("%d", &escolha) != 1) {
           
            scanf("%99s", buffer);
            printf("\nEntrada inválida! Digite apenas números.\n\n");
            continue;
        }

        printf("\n");

        switch (escolha) {
            case 1:
                fibonacci();
                break;
            case 2:
                fatoriais();
                break;
            case 3:
                verificarPalindromo();
                break;
            case 4:
                substring();
                break;
            case 0:
                printf("O programa será encerrado.\n");
                return 0;
        }
    }
}
