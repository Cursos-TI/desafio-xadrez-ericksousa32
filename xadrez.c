#include <stdio.h>

void movimentoTorre(int torre){
    if(torre > 0){
        printf("Direita\n"); //Simulando o movimento da peça.
        torre--;
        movimentoTorre(torre); //A função chama a si propria passando o valor de torre decrementado.
    }
}

void movimentoBispo(int bispo){
    if(bispo > 0){
        printf("Cima, Direita\n"); //Simulando o movimento da peça.
        bispo--;
        movimentoBispo(bispo); //A função chama a si propria passando o valor de bispo decrementado.
    }
}

void movimentoRainha(int rainha){
    if(rainha > 0){
        printf("Esquerda\n"); //Simulando o movimento da peça.
        rainha--;
        movimentoRainha(rainha); //A função chama a si propria passando o valor de rainha decrementado.
    }
}

int main(){
    int torre = 5, bispo = 5, rainha = 8; //Inicializando as variáveis de controle.

    printf("Simulação do movimento de quatro peças de Xadrez: Torre, Bispo, Rainha e Cavalo\n");

    printf("\nA Torre se moverá cinco casas para a direita...\n");
    movimentoTorre(torre); //Chamada da função recursiva.

    /*for(torre; torre < 5; torre++){ //Definindo o tamanho do loop e depois incrementa a variável de controle.
        printf("Direita\n"); //Simulando o movimento da peça.
    }*/

    printf("\nO Bispo se moverá cinco casas na diagonal para cima e à direita...\n");
    movimentoBispo(bispo); //Chamada da função recursiva

    /*while(bispo < 5){ //Definindo o tamanho do loop.
        printf("Cima, Direita\n"); //Simulando o movimento da peça.
        bispo++; //Incrementando a variável de controle.
    }*/

    printf("\nA Rainha se moverá oito casas para a esquerda...\n");
    movimentoRainha(rainha); //Chamada da função recursiva.
    /*do{
        printf("Esquerda\n"); //Simulando o movimento da peça.
        rainha++; //Incrementando a variável de controle.
    }while(rainha < 8); //Definindo o tamanho do loop*/

    printf("\nO Cavalo se moverá duas casas para cima e uma casa para a direita...\n");

    for(int y = 0; y < 3; y++){ //Utilizando  a variável Y para controlar o loop externo.
        if(y < 2)
            printf("Cima\n"); //Simulando o movimento da peça.
        for(int x = 0; x <= y; x++){ //Utilizando a variável X para controlar o loop interno.
            if(y == 2)
                printf("Direita\n"); //Simulando o movimento da peça.
                break;
        }
    }

    printf("\nO Bispo se moverá cinco casas na diagonal para cima e à direita (Loops Aninhados)...\n");

    for(int y = 0; y < 5; y++){ //Utilizando  a variável Y para controlar o loop externo.
        printf("Cima, "); //Simulando o movimento da peça.
        for(int x = 0; x < 5; x++){ //Utilizando a variável X para controlar o loop interno.
            if(x == y)
                printf("Direita\n"); //Simulando o movimento da peça.
        }
    }

    return 0;
}