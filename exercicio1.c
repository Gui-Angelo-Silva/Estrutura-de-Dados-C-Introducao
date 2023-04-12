#include <stdio.h>
int main(){

    float valorDep;
    float valorTaxa;
    float valorTotal;

    printf("Digite o valor do depósito: ");
    scanf("%f", & valorDep);
    printf("Digite o valor da taxa: ");
    scanf("%f", & valorTaxa);
    valorTotal = valorDep + (valorDep * valorTaxa);
    printf("%f o valor do rendimento é: %f", valorDep/valorTaxa);
    printf("O valor total do deposito será: %f", valorTotal);
    
}