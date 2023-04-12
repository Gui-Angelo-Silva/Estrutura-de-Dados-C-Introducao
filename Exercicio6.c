#include <stdio.h>
#include <math.h>

int main(){
    short lado, area;

    printf("Informe a medida de um dos lados: ");
    scanf("%hd", & lado);
    printf("O valor da área do quadrado: %hd", area = pow(lado, 2));    
}