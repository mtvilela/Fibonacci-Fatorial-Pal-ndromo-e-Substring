#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void fibonacci() {
    int n;
    printf("Digite a quantidade de termos da sequência de fibonacci (1 a 50): ");
    scanf("%d", &n);
    
    long long fib[50] = {0, 1};
    
    if (n < 1 || n > 50) {
        printf("O número que foi digitado não é válido\n\n");
        return;
    }
    
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
        }
     
     printf("Sequência de Fibonacci com %d numeros:\n", n);
    
    for (int i = 0; i < n; i++) {
        printf("%lld \n", fib[i]);
    }
    printf("\n");}
    
void fatoriais() {
    int n;
    printf("Digite um numero inteiro (1 - 20) :");
    scanf("%d", &n);
    
    if (n < 1 || n > 20){
        printf("O número que foi digitado não é válido\n\n");
        return;
    }
    
    long long fat[20] = {1};
    
   for (int i = 1; i < n; i++) {
    fat[i] = fat[i-1] * (i+1);
}

    printf("Resultado Fatoriais até %d\n", n);
    for (int i = 0; i < n; i++) {
    printf("%d! = %lld\n", i+1, fat[i]);
}
    printf("\n");
}

int main() {
    int escolha;
    
    while (1) {
        printf("Digite o numero do exercicio que deseja selecionar\n1: Fibonacci\n2: Fatoriais\n0: Sair\n=");
        scanf("%i", &escolha);
        
        switch(escolha) {
            case 1:
                fibonacci();
                break;
            case 2:
                fatoriais();
                break;
            case 0:
                printf("O programa será encerrado\n");
                return 0;
        }
    }
}