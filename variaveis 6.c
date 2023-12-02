#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
   //strcmp(strg1, strg2)==0

    char player [256];
    char player2 [256];

    printf("Player 1 sua escolha....\n");
    scanf("%s",player);

    printf("Player 2 sua escolha....\n");
    scanf("%s",player2);

    //printf("Player 1 escolheu %s, e player 2 escolheu %s\n",player,player2);

    printf("aguarde.......\n");

    if (strcmp(player,"papel")== 0){
        if (strcmp(player2,"papel")==0){
            printf("empate");
        } else if(strcmp(player2,"pedra")==0){
            printf("player 1 ganhou pois papel cobre pedra");
        } else if(strcmp(player2,"tesoura")==0){
            printf("player 2 ganhou pois tesoura corta papel");
        } else {
            printf("player2 deu uma informacao invalida");
        }


  } else if (strcmp(player,"tesoura") == 0){
        if (strcmp(player2,"papel")==0){
            printf("player 1 ganhou pois tesoura corta papel");
        } else if(strcmp(player2,"pedra")==0){
            printf("player 2 ganhou pois pedra quebra tesoura");
        } else if(strcmp(player2,"tesoura")==0){
            printf("empate");
        } else {
            printf("player2 deu uma informacao invalida");
        }

 } else if (strcmp(player,"pedra") == 0){
       if (strcmp(player2,"papel")==0){
            printf("player 2 vence pois papel cobre pedra");
       }else if(strcmp(player2,"pedra")==0){
          printf("empate");
       }else if(strcmp(player2,"tesoura")==0){
           printf("player 1 ganha pois pedra quebra tesoura");
        } else{
            printf("player2 deu uma informacao invalida");
        }
        } else{
        printf("player forneceu uma informacao invalida");
        }

            return 0;
}
