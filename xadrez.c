#include <stdio.h>

int main(){
    int rainha = 1, bispo = 1;

    //loop da rainha

    printf("Rainha:\n");

    while (rainha <= 8){
        printf("esquerda\n");
        rainha++;
    }

    //loop do bispo
     
    printf("Bispo:\n"); 

    do {
        printf("cima-direita\n");
        bispo++;

    } while (bispo <= 5);

    //loop da torre

    printf("Torre:\n");

    for (int torre = 1; torre <= 5; torre++){
        printf("direita\n");
    }





    return 0;
}