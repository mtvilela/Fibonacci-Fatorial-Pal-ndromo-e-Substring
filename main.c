#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void fibonacci() {
    int n;
    printf("Digite a quantidade de termos da sequência de fibonacci (1 a 50): ");
    scanf("%d", &n);
    
    long long fib[50] = {0, 1};
    
    if (n < 1 || n > 50) {
        printf("Número inválido");
    }
    
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
        }
     
     printf("Sequência de Fibonacci com %d numeros:\n", n);
    
    for (int i = 0; i < n; i++) {
        printf("%lld \n", fib[i]);
    }
    printf("\n");
    
}

int main()
{
    int escolha;
    
    while (1) {
        printf("Digite o numero do exercicio que deseja selecionar\n1: Fibonacci\n0: Sair\n=");
        scanf("%i", &escolha);
        
        switch(escolha) {
            case 1:
                fibonacci();
                break;
            case 0:
                printf("O programa será encerrado\n");
                return 0;
        }
    }
    return 0;
}