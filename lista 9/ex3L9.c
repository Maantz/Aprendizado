#include <stdio.h>
#include <string.h>
typedef struct endereco{
    int numero;
    int cep;
    char complemento[40],rua[40],estado[30], cidade[30];
}endo;
void ler(endo*E){
     printf("Cadastro de Enderecos\n");
            for(int i=0;i<3;i++){//leitura de struct
                printf("Entre com o nome da rua: ");
                setbuf(stdin,NULL);
                scanf("%[^\n]", E[i].rua);
                printf("Entre com o numero: ");
                setbuf(stdin,NULL);
                scanf("%d", &E[i].numero);
                setbuf(stdin,NULL);
                printf("Entre com o nome da cidade: ");
                setbuf(stdin,NULL);
                scanf("%[^\n]", E[i].cidade);
                printf("Entre com o nome do Estado: ");
                setbuf(stdin,NULL);
                scanf("%[^\n]", E[i].estado);
                printf("Cite um Complemento: ");
                setbuf(stdin,NULL);
                scanf("%[^\n]", E[i].complemento);
                setbuf(stdin,NULL);
                printf("Entre com o CEP: ");
                setbuf(stdin,NULL);
                scanf("%d", &E[i].cep);
            }
}
void mostra(endo*A){
    char minas[15]="Minas Gerais";
    int verifica;
        for(int j=0;j<3;j++){//mostrando na tela
                verifica=strcmpi(A[j].estado,minas);
                if(verifica==0){
                     printf("_______________________________________________________________________________________________\n");
                     printf("|Rua:%s                                 |Numero:%d        |Complemento:%s                      \n", A[j].rua,A[j].numero,A[j].complemento);
                     printf("|Cidade:%s                              |CEP:%d           |Estado:%s                           \n",A[j].cidade,A[j].cep,A[j].estado);
                     printf("|______________________________________________________________________________________________\n");
                }
                }
}


int main(){
    endo end[3];
    ler(end);
    mostra(end);
    return 0;
}