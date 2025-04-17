#include <stdio.h>

    int main() 
{
 int numero;
 
 printf("digite o numero:");
 scanf("%d", &numero);
 
 if (numero % 2 == 0) {
 printf("Seu numero é par :)");
} else {
    printf("Seu numero é impar :D");
}
}