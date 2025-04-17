#include <stdio.h>

    int main() 
{
 int nota;
 
 printf("digite sua nota:");
 scanf("%d", &nota);
 
 if (nota >= 6) {
 printf("Parabens, você está aprovado :D");
} else if (nota == 4 || nota == 5) {
    printf("Triste, você está de recuperacão :(");
} else {
    printf("Que pena, você está reprovado :( ");
}
}