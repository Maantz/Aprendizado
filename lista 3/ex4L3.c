#include <stdio.h>


int main(){
   int i;
   float nota[3],maior,menor;
   char name[3];
    printf("Nota da Turma\n");
    for(i=1;i<4;i++){
        int j=0;
        printf("Informe a Inicial do Aluno #%d: ", i);
        setbuf(stdin, NULL);
        scanf("%c", &name[j]);
        printf("Informe a Nota: ");
        setbuf(stdin, NULL);
        scanf("%f", &nota[j]);j++;   
    }
    maior = nota[0];
    menor = nota[0];
    for(i=0;i<3;i++){
    if(maior<nota[i])maior=nota[i];
    }
    printf("maior %.1f\n", maior);
    
    return 0;
}