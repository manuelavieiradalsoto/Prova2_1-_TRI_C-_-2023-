#include <stdio.h>

/*
1. Exiba o seu nome pelo número de vezes correspondente à sua idade.
Exibir nome e o número da exibição.

2. Solicite ao usuário para digitar um número entre 0 e 1000. Garantir que esse número digitado esteja dentro do intervalo, não avançar enquanto essa condição não seja satisfeita.
Exibir os números ímpares que estão dentro do intervalo de 0 até o número digitado.
*/
int main() {
    
    int i=0;
    int numero;

    for(i=0;i<=15;i++){
        printf("Manuela Vieira Dalsoto");
        i++;
    }

    printf("Digite um número entre 0 e 1000: ");
    scanf("%d", &numero);

    while(numero < 0 || numero > 1000){
        printf("Número inválido! Digite um número entre 0 e 1000: ");
        scanf("%d", &numero);
    }
    
    for(i=0;i<=numero;i++){
        if(i%2==1){
            print("%i", numero);
        }
    }
    printf("Acima estão os numero impares dentro do intervalo de 0 á 1000.");

    return 0;
}