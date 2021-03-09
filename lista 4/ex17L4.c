#include <stdio.h>

int main(){
    int i=5;
    char letra, letra2;
    letra = 'q';
    while(i>0){
        printf("Qual e a Letra ?\n");
        setbuf(stdin,NULL);
        scanf("%c", &letra2);
        if(letra2 == letra){
            printf("ACERTOU!");break;
        }
        else if(i>2){
            i--;
            printf("Errado! Voce tem mais %d chances\n", i);
        }
        else if(i==2){
            i--;
            printf("Ultima chance!!!\n");
        }else{
            i--;
            printf("Acabaram suas chances.A letra correta e %c\n", letra);
        }
    }
    return 0;
}