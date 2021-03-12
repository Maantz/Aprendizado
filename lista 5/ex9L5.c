#include <stdio.h>

int main(){
    printf("<< Media de n alunos. Maximo 100 alunos >>\n");
    int n, i=0;
    float soma=0;
    printf("Entre com o numero de alunos: ");
    scanf("%d", &n);
    int nota[n];
    if(n>100){
        printf("Erro!O numero maximo de alunos permitido é 100.\n");
        return 0;
    }
    else{
    while(i<n){
    printf("Digite a nota do aluno %d: ", i+1);
    scanf("%d", &nota[i]);
    soma += nota[i];
    i++;
    }
    printf("Relatorio de Notas\n");
    for(int j=0; j<n; j++){
        printf("A nota do aluno %d e: %d\n", j+1, nota[j]);
    }
    printf("A media da turma e: %.1f\n", soma/n);
}
return 0;
}