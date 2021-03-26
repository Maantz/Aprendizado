#include<stdio.h>
#include<string.h>

typedef struct alunos{
    char nome[40],matricula[12];
    float p1,p2,p3;
    int faltas;    
}aluno;

void cadastro_(aluno *p, int i){
    printf("Digite o nome do Aluno:\n ");
    setbuf(stdin,NULL);
    fgets(p[i].nome,40,stdin);
    printf("Digite a matricula do Aluno:\n ");
    setbuf(stdin,NULL);
    fgets(p[i].matricula,12,stdin);
    printf("Digite a nota da P1:\n");
    setbuf(stdin,NULL);
    scanf("%f", &p[i].p1);
    printf("Digite a nota da P2:\n");
    setbuf(stdin,NULL);
    scanf("%f", &p[i].p2);
    printf("Digite a nota da P3:\n");
    setbuf(stdin,NULL);
    scanf("%f", &p[i].p3);
    printf("Digite a quantidade de Faltas:\n");
    setbuf(stdin,NULL);
    scanf("%f", &p[i].faltas);
    return;
}
maior_MediaG(aluno *p){
    float maior, media[3];
    int cont;
    for(int k=0;k<3;k++){
        media[k]= (p[k].p1+p[k].p2+p[k].p3) / 3;
    }
    maior = media[0];
    for(int ind=0;ind<3;ind++){
        if(maior<media[ind]){
            maior=media[ind];
            cont = ind;
        }
    }
    printf("O aluno %s, obteve a maior nota na Media Geral, valor = %.1f\n", p[cont].nome, maior);
    return;
}
maior_p1(aluno *p){
    float maior;
    int cont; 
    maior = p[0].p1;
    for(int ind=0;ind<3;ind++){
        if(maior<p[ind].p1){
            maior=p[ind].p1;
            cont = ind;
        }
    }
    printf("O aluno %s, obteve a maior nota na P1, valor = %.1f\n", p[cont].nome, maior);
    return;
}
menor_MediaG(aluno *p){
    float menor, media[3];
    int cont;
    for(int k=0;k<3;k++){
        media[k]= (p[k].p1+p[k].p2+p[k].p3) / 3;
    }
    menor = media[0];
    for(int ind=0;ind<3;ind++){
        if(menor>media[ind]){
            menor=media[ind];
            cont = ind;
        }
    }
    printf("O aluno %s, obteve a maior nota na Media Geral, valor = %.1f\n", p[cont].nome, menor);
    return;
}

void menu(){
    aluno al[3];
    int i=0;
    char opcao;
    while(1){
        printf("Portal UFU\n"); 
        printf("Escolha uma opcao:\n");
        printf("-a)Cadastrar alunos(maximo 3).\n-b)Maior nota da P1.\n");
        printf("-c)Maior media geral.\n-d)Menor media geral.\n-e)Situacao final.\n-s)Sair do programa.");
        printf("\n-- ?");
        scanf(" %c", &opcao);
        switch (opcao)
        {
        case 'a':
            cadastro_(al, i);i++;
                    break;
        case 'b':
            maior_p1(al);
                break;
        case 'c':
            maior_MediaG(al);
                break;
        case 'd':
            menor_MediaG(al);
        case 's':
            return 0;       
        default:
            printf("[ERRO!]- OPCAO INVALIDA!!!\n");
                menu();
                    break;
        }
    }
}
int main(){
    menu();

}