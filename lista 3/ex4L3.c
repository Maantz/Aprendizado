#include <stdio.h>

   typedef struct alunos{
       float nota;
       char name; 
    }alunos;

int main(){
   alunos  al[3];
   int i, j=0;
   float maior,menor;
   char nMaior, nMenor;
    printf("Nota da Turma\n");
    for(i=1;i<4;i++){
        printf("Informe a Inicial do Aluno #%d: ", i);
        setbuf(stdin, NULL);
        scanf("%c", &al[j].name);
        printf("Informe a Nota: ");
        setbuf(stdin, NULL);
        scanf("%f", &al[j].nota);j++;   
    }
    maior = al[0].nota;
    menor = al[0].nota;
    nMaior = al[0].name;
    nMenor = al[0].name;
    for(i=0;i<3;i++){
    if(maior<al[i].nota){maior=al[i].nota; nMaior = al[i].name;}
    }
    for(i=0;i<3;i++){
    if(menor>al[i].nota){menor=al[i].nota; nMenor = al[i].name;}
    }
    

    printf("%c tem a maior nota %.1f e %c tem a pior nota  %.1f\n",nMaior, maior,nMenor, menor);
    
    return 0;
}