#include <stdio.h>

int main(){
    int num = 42;
    printf("Jogo da adivinhacao\n");
    
    int chute;
    printf("Qual e o seu chute? ");
    scanf("%d", &chute);
    printf("O numero: %d \n", num);
    printf("Seu chute foi %d \n", chute);
    if (chute == num){
        printf("Acertou!\n");

    }else{
        printf("Errou!\n");
    }
    
}