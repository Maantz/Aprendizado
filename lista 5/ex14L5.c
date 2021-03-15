#include <stdio.h>

typedef struct aluno{
    int codigo;
    char classe;
    float cra;
}aluno;


int main(){
    int nCad;
    aluno al[10000];
    printf("<<Universidade X>>\n");
    printf("Quantos alunos serao cadastrados: ");
    setbuf(stdin,NULL);
    scanf("%d", &nCad);
    if(nCad>10000){
        return 0;
    }
    for(int i=0; i<nCad;i++){
        setbuf(stdin,NULL);
        printf("Entre com o numero do aluno: ");
        scanf("%d", &al[i].codigo);
        printf("Entre com a classe social do aluno: ");
        setbuf(stdin,NULL);
        scanf("%c", &al[i].classe);
        printf("Entre com o CRA do aluno: ");
        setbuf(stdin,NULL);
        scanf("%f", &al[i].cra);
    }
    printf("====Alunos Cadastrados====\n");
    for(int j=0;j<nCad;j++){
        printf("Numero: %d Classe Social: %c CRA: %.2f\n", al[j].codigo, al[j].classe, al[j].cra);
    }
    return 0;
}