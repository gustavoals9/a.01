#include <stdio.h>
// teste de codigo
int main (){
    int idade; //
    printf ("digite sua idade:");
    scanf ("%d", &idade);
    
    printf("sua idade e %d\n", idade);
    printf("minha posicao de memoria e %d\n", &idade);
    return 0;

}