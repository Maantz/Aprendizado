#include <stdio.h>
#include <string.h>

typedef struct eletrodomestico{
    char name[15];
    float potencia, horas;
}eletros;

void cad(eletros *e, int i){
    printf("Digite o nome do Eletrodomestico: ");
    setbuf(stdin,NULL);
    fgets(e[i].name,15,stdin);
    printf("Digite a potencia: ");
    setbuf(stdin,NULL);
    scanf("%f", &e[i].potencia);
    printf("Tempo ativo por dia: ");
    setbuf(stdin,NULL);
    scanf("%f", &e[i].horas);
    return;
}
void consumo(eletros *e){
    printf("Quanto tempo?\n");
    int dias;
    setbuf(stdin,NULL);
    scanf("%d", &dias);
    float consumoPdia[5], consumoRel[5], consumotdia,consumotmes;
    for(int i=0; i<5;i++){
        consumoPdia[i] = e[i].potencia*e[i].horas;
    }
    for(int j=0;j<5;j++){
        consumotdia += consumoPdia[j];
    }
    consumotmes = dias* consumotdia;
        printf("Consumo Total da Casa: %.2fKw\n", consumotmes);
    for(int k=0;k<5;k++){
        printf("Consumo relativo %s: %.2f%%\n", e[k].name, ((consumoPdia[k]*dias)/consumotmes));
    }
    return;
}


void menu(){
    setbuf(stdin,NULL);
    eletros eletro[5];
    int i=0;
    char opcao;
    while(1){
     printf("Calculo de Gasto Eletrico\n"); 
        printf("Escolha uma opcao:\n");
        printf("-a)Cadastrar Eletrodomesticos(maximo 5).\n-b)Consumo Total da Casa.\n");
        printf("-s)Sair do programa.");
        printf("\n-- ?");
        setbuf(stdin,NULL);
        scanf("%c", &opcao);
        switch (opcao){
        case 'a':
            cad(eletro, i);i++;
                    break;
        case 'b':
            consumo(eletro);
                break;
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