#include <studio.h> 

int main() 
{
int idade;
printf("digite a idade:");
scanf("%d", &idade);

if (idade >= 18 ) {
printf("adulto");

} else if ( idade == 12 || idade == 13 || idade == 14 || idade == 15 || idade == 16 ||idade == 17) {
    printf("adolecente");
} else {
    printf("criança");
}
 return 0;
}