#include <stdio.h>

int main(){
    float salario;
    printf("Informe seu salário: ");
    scanf("%g", & salario);
    printf("O valor a ser pago de imposto é: %g", salario * 0.05)
}