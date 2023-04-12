#include <stdio.h>

int main(){
    float salarioFuncionario, salarioMinimo = 1320;

    printf("Informe o salario: ");
    scanf("g", & salarioFuncionario);
    printf("A quantidade de salários mínimos é de: %g", salarioFuncionario/salarioMinimo);
}