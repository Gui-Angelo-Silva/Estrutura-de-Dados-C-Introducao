#include <stdio.h>

int main(){
    int baseMaior, baseMenor, altura;
    printf("Informe a base maior, a menor e a altura: ");
    scanf("%d %d %d", baseMaior, baseMenor, altura);
    printf("O valor da área do trapézio é: %d", ((baseMaior*baseMenor) * altura) / 2);
}