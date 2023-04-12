#include <stdio.h>
int main(){
float diagonalMaior, diagonalMenor;
printf("Digite o valor da diagonal menor: ");
scanf("%f", & diagonalMenor);
printf("Digite o valor da diagonal maior: ");
scanf("%f", & diagonalMaior);

printf("A área do losango é: %g\n", diagonalMaior*diagonalMenor/2);


}