#include <stdio.h>
int main(){
short int num, raiz;
printf("Digite um número: ");
scanf("%d", & num);
raiz = sqrt(num);
printf("A raiz é: %d\n", raiz);
printf("O quadrado do número %d\n é: %d\n", num, num*num);

}