#include <stdio.h>
int main(){
short int num1, num2, total;
printf("Informe um número: ");
scanf("%d", & num1);
printf("Informe outro número: ");
scanf("%d", & num2);
total = pow(num1, num2);
printf("O resultado é: %d\n", total);
}