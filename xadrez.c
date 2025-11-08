#include <stdio.h>

//recursividade da torre

void recursivo(int torre){
     if (torre > 0){
         printf("direita\n");

        recursivo(torre - 1);
     }
}

//recursividade do bispo

void recursivo2(int bispo){
    if (bispo > 0){
        printf("cima-direita\n");

        recursivo2(bispo - 1);
    }
}
//recursividade da rainha    

void recursivo3(int rainha){
    if (rainha > 0){
        printf("esquerda\n");

        recursivo3(rainha - 1);
    }
}

   


int main(){
    int torre2 = 4, bispo2 = 5, rainha2 = 8;

    printf("torre:\n");
    recursivo(torre2);

    printf("bispo:\n");
    recursivo2(bispo2);

    printf("rainha:\n");
    recursivo3(rainha2);

   
    
    printf("Cavalo:\n");

    for (int cavalo = 0, movimento = 0; cavalo <= 0; cavalo++)
    {
        while(movimento <= 1)
        {
            printf("cima\n");
            movimento++;
        }
        
        printf("direita\n");
    }





    return 0;
}