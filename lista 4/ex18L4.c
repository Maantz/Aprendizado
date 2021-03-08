#include <stdio.h>

int main(){
    
    int opcao, i=1;
    float velKM, velMS, vel;
    printf("<<Conversor>>\n");
    while(i==1){
    printf("1-Conversor de Km/h para m/s\n2-Conversor de m/s para Km/h\n3-Sair\n");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:printf("Digite a velocidade em Km/h: ");
               scanf("%f", &vel);
               velMS = vel/3.6;
               printf("A velocidade em m/s e %f\n", velMS);break;
        case 2:printf("Digite a velocidade em m/s: ");
               scanf("%f", &vel);
               velKM = vel*3.6;
               printf("A velocidade em Km/h e %f\n", velKM);break;
        case 3:   
              i=2;break;

        default: printf("codigo invalido\n");
    }
    }



    return 0;
}