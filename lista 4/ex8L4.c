#include <stdio.h>

int main(){
    int i;
    printf("<<Contagem Progressiva ate 0>>\n");
    printf("Qual o numero inicial ? ");
    scanf("%d", &i);
    do{
        printf("%d...", i);i++;
    }while(i<=0);
    printf("FIM!");
    return 0;
}
/*O Comando Do..While não é indicado para resolver este exercício, pois
a condição que ele usa, só é aplicada ao final de uma primeira vez que ele realiza
o comando do.Por exemplo: se você digitar um númeor maior que zero, ele vai imprimir o número
e só depois dele a mensagem de "FIM!!" que deveria ser a única coisa a ser imprimida na tela.*/