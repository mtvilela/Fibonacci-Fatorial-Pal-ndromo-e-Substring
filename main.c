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

int main() {
    int escolha;

    while (1) {
        printf("========== MENU ==========\n");
        printf("1: Fibonacci\n");
        printf("2: Fatoriais\n");
        printf("0: Sair\n");
        printf("==========================\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);
        printf("\n");

        switch (escolha) {
            case 1:
                fibonacci();
                break;
            case 2:
                fatoriais();
                break;
            case 0:
                printf("O programa será encerrado.\n");
                return 0;
            default:
                printf("Opção inválida. Por favor, escolha 0, 1 ou 2.\n\n");
                break;
        }
    }
}
