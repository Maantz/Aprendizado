#include <stdio.h>

int main(){
    float cores[4], soma=0;
    printf("<<Probabilidades>>\n");
    printf("Digite a quantidade de Bolinhas\n");
    for(int i=0;i<4;i++){
        switch (i)
        {
        case 0: printf("Verde: ");break;
        case 1: printf("Azul: ");break;
        case 2: printf("Amarela: ");break;
        case 3: printf("Vermelha: ");break;
        }
        scanf("%f", &cores[i]); 
        soma += cores[i];
        }
    printf("Probabilidades\n");
    float verde = 100*(cores[0]/soma);
    float azul = 100*(cores[1]/soma);
    float amarela = 100*(cores[2]/soma);
    float vermelha =100*(cores[3]/soma);
    printf("Verde: %.1f%%", verde);
    if(verde>azul&&verde>amarela&&verde>vermelha){
    printf("<<Maior probabilidade\n");
    }
    printf("\nAzul: %.1f%%", azul);
    if(azul>verde&&azul>amarela&&azul>vermelha){
    printf("<<Maior probabilidade\n");
    }
    printf("\nAmarela: %.1f%%", amarela);
    if(amarela>verde&&amarela>azul&&amarela>vermelha){
    printf("<<Maior probabilidade\n");
    }
    printf("\nVermelha: %.1f%%", vermelha);
     if(vermelha>verde&&vermelha>azul&&vermelha>amarela){
    printf("<<Maior probabilidade\n");
    }
    return 0;
    
}