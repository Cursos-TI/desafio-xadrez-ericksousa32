#include <stdio.h>

int main(){
    int torre = 0, bispo = 0, rainha = 0; //Inicializando as variáveis de controle

    printf("Simulação do movimento de três peças de Xadrez: Torre, Bispo e Rainha\n");

    printf("\nA Torre se moverá 5 casas para a direita...\n");
    for(torre; torre < 5; torre++){ //Definindo o tamanho do loop e depois incrementa a variável de controle
        printf("Direita\n"); //Simulando o movimento da peça
    }

    printf("\nO Bispo se moverá cinco casas na diagonal para cima e à direita...\n");
    while(bispo < 5){ //Definindo o tamanho do loop.
        printf("Cima, Direita\n"); //Simulando o movimento da peça
        bispo++; //Incrementando a variável de controle
    }

    printf("\nA Rainha se moverá oito casas para a esquerda...\n");
    do{
        printf("Esquerda\n"); //Simulando o movimento da peça
        rainha++; //Incrementando a variável de controle
    }while(rainha < 8); //Definindo o tamanho do loop

    return 0;
}
