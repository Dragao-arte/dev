#include <stdio.h>

    int main() 
{
 int a, b, c;
 
 printf("Digite o valor de a:");
 scanf("%d", &a);
 printf("Digite o valor de b:");
 scanf("%d", &b);
 printf("Digite o valor de c:");
 scanf("%d", &c);
 
 if(a > b && a > c){
 printf("a é maior");
 } else if ( b > a && b > c ) {
    printf("b é maior");
 } else {
    printf("c é maior");
}
}