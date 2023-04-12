#include <stdio.h>
#include <math.h>

int main(){
    float pi = 3.14, raio;

    printf("Informe o valor do raio: ");
    scanf("%g", & raio);
    raio = pow(raio, 2);
    printf("O valor da área do círculo é: %g", pi * raio);
}