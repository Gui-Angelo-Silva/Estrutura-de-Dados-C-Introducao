#include <stdio.h>

int main(){
    short diagonalMaior, diagonalMenor;
    printf("Informe o valor da diagonal maior e a menor: ");
    scanf("%hd %hd", & diagonalMaior, diagonalMenor);
    printf("O valor da área do losango é: %hd", (diagonalMaior* diagonalMenor) / 2);
}