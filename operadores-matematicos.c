#include <stdio.h>

int main()
{
int numero1, numero2;
int soma, subtracao, multiplicacao, divisao;

soma = numero1 + numero2;
subtracao = numero1 - numero2;
multiplicacao = numero1 * numero2;
divisao = numero1 / numero2;

printf("Digite o numero 1");
scanf("%d", &numero1);

printf("Digite o numero 2");
scanf("%d", &numero2);

printf("A soma é: %d\n", soma);
printf("A subtração é: %d\n", subtracao);
printf("A multiplicação é: %d\n", multiplicacao);
printf("A divisão é: %d\n", divisao);


}