#include <stdio.h>
#include <string.h>
typedef struct cadastro{
    char nome[40], sexo[10],estadoC[12],rg[15];
    int CPF;
    float salary;
        struct endComercial{
            int numero1;
            int cep1;
            char complemento1[40],rua1[40],estado1[30], cidade1[30];
        }endComercial;
             struct endResidencial{
                int numero;
                int cep;
                char complemento[40],rua[40],estado[30], cidade[30];
            }endResidencial;
                struct dataIngresso{
                     int dia1,mes1,ano1;
                }dataIngresso;
                    struct dataNascimento{
                        int dia,mes,ano;
                    }dataNascimento;
                         struct telreside{
                            int ddd1,telefone1;
                        }telreside;
                            struct tel{
                                int ddd,telefone;
                            }tel;
}cad;


void ler(cad*E){
    int i;
    
        printf("Cadastro de Enderecos\n");
        printf("Entre com a posicao do cadastro: ");
        scanf(" %d", &i);
            if(E[i].nome[0]!=' '){
                int des;
                printf("A posicao ja esta ocupada deseja sobrescreve-la ?\nDigite 1 para sim e 2 para nao\n");
                scanf("%d", &des);
                    switch(des){
                        case 1: 
                            printf("======Dados Pessoais======\n");
                            printf("Digite o nome: ");
                            setbuf(stdin,NULL);
                            scanf("%[^\n]", E[i].nome);
                            printf("Digite o sexo: ");
                            setbuf(stdin,NULL);
                            scanf("%[^\n]", E[i].sexo);
                            printf("Digite o Estado Civil: ");
                            setbuf(stdin,NULL);
                            scanf("%[^\n]", E[i].estadoC);
                            printf("Digite o RG: ");
                            setbuf(stdin,NULL);
                            scanf("%[^\n]", E[i].rg);
                            printf("Digite o Salario: ");
                            setbuf(stdin,NULL);
                            scanf("%f", &E[i].salary);
                            printf("Digite o CPF: ");
                            scanf(" %d", &E[i].CPF);

                                printf("======Endereco Residencial======\n");
                            printf("Entre com o nome da rua: ");
                            setbuf(stdin,NULL);
                            scanf("%[^\n]", E[i].endResidencial.rua);
                            printf("Entre com o numero: ");
                            setbuf(stdin,NULL);
                            scanf("%d", &E[i].endResidencial.numero);
                            setbuf(stdin,NULL);
                            printf("Entre com o nome da cidade: ");
                            setbuf(stdin,NULL);
                            scanf("%[^\n]", E[i].endResidencial.cidade);
                            printf("Entre com o nome do Estado: ");
                            setbuf(stdin,NULL);
                            scanf("%[^\n]", E[i].endResidencial.estado);
                            printf("Cite um Complemento: ");
                            setbuf(stdin,NULL);
                            scanf("%[^\n]",E[i].endResidencial.complemento);
                            setbuf(stdin,NULL);
                            printf("Entre com o CEP: ");
                            setbuf(stdin,NULL);
                            scanf("%d", &E[i].endResidencial.cep);
                                printf("======Endereco Comercial======\n");
                            printf("Entre com o nome da rua: ");
                            setbuf(stdin,NULL);
                            scanf("%[^\n]", E[i].endComercial.rua1);
                            printf("Entre com o numero: ");
                            setbuf(stdin,NULL);
                            scanf("%d", &E[i].endComercial.numero1);
                            setbuf(stdin,NULL);
                            printf("Entre com o nome da cidade: ");
                            setbuf(stdin,NULL);
                            scanf("%[^\n]", E[i].endComercial.cidade1);
                            printf("Entre com o nome do Estado: ");
                            setbuf(stdin,NULL);
                            scanf("%[^\n]", E[i].endComercial.estado1);
                            printf("Cite um Complemento: ");
                            setbuf(stdin,NULL);
                            scanf("%[^\n]",E[i].endComercial.complemento1);
                            setbuf(stdin,NULL);
                            printf("Entre com o CEP: ");
                            setbuf(stdin,NULL);
                            scanf("%d", &E[i].endComercial.cep1);
                                printf("======Data de Nascimento======\n");
                            printf("Entre com o dia: ");
                            scanf(" %d", &E[i].dataNascimento.dia);
                            printf("Entre com o mes: ");
                            scanf(" %d", &E[i].dataNascimento.mes);
                            printf("Entre com o ano: ");
                            scanf(" %d", &E[i].dataNascimento.ano);
                                printf("======Data de Ingresso======\n");
                            printf("Entre com o dia: ");
                            scanf(" %d", &E[i].dataIngresso.dia1);
                            printf("Entre com o mes: ");
                            scanf(" %d", &E[i].dataIngresso.mes1);
                            printf("Entre com o ano: ");
                            scanf(" %d", &E[i].dataIngresso.ano1);
                                printf("======Telefone Comercial======\n");
                            printf("Entre com o ddd: ");
                            scanf(" %d", &E[i].tel.ddd);
                            printf("Entre com o telefone: ");
                            scanf(" %d", &E[i].tel.telefone);
                                printf("======Telefone Residencial======\n");
                            printf("Entre com o ddd: ");
                            scanf(" %d", &E[i].telreside.ddd1);
                            printf("Entre com o telefone: ");
                            scanf(" %d", &E[i].telreside.telefone1);
                                        return;
                    case 2:
                            printf("Loading...\n");
                            return;
                        
                    }
                }else{
                            printf("======Dados Pessoais======\n");
                            printf("Digite o nome: ");
                            setbuf(stdin,NULL);
                            scanf("%[^\n]", E[i].nome);
                            printf("Digite o sexo: ");
                            setbuf(stdin,NULL);
                            scanf("%[^\n]", E[i].sexo);
                            printf("Digite o Estado Civil: ");
                            setbuf(stdin,NULL);
                            scanf("%[^\n]", E[i].estadoC);
                            printf("Digite o RG: ");
                            setbuf(stdin,NULL);
                            scanf("%[^\n]", E[i].rg);
                            printf("Digite o Salario: ");
                            setbuf(stdin,NULL);
                            scanf("%f", &E[i].salary);
                            printf("Digite o CPF: ");
                            scanf(" %d", &E[i].CPF);

                                printf("======Endereco Residencial======\n");
                            printf("Entre com o nome da rua: ");
                            setbuf(stdin,NULL);
                            scanf("%[^\n]", E[i].endResidencial.rua);
                            printf("Entre com o numero: ");
                            setbuf(stdin,NULL);
                            scanf("%d", &E[i].endResidencial.numero);
                            setbuf(stdin,NULL);
                            printf("Entre com o nome da cidade: ");
                            setbuf(stdin,NULL);
                            scanf("%[^\n]", E[i].endResidencial.cidade);
                            printf("Entre com o nome do Estado: ");
                            setbuf(stdin,NULL);
                            scanf("%[^\n]", E[i].endResidencial.estado);
                            printf("Cite um Complemento: ");
                            setbuf(stdin,NULL);
                            scanf("%[^\n]",E[i].endResidencial.complemento);
                            setbuf(stdin,NULL);
                            printf("Entre com o CEP: ");
                            setbuf(stdin,NULL);
                            scanf("%d", &E[i].endResidencial.cep);
                                printf("======Endereco Comercial======\n");
                            printf("Entre com o nome da rua: ");
                            setbuf(stdin,NULL);
                            scanf("%[^\n]", E[i].endComercial.rua1);
                            printf("Entre com o numero: ");
                            setbuf(stdin,NULL);
                            scanf("%d", &E[i].endComercial.numero1);
                            setbuf(stdin,NULL);
                            printf("Entre com o nome da cidade: ");
                            setbuf(stdin,NULL);
                            scanf("%[^\n]", E[i].endComercial.cidade1);
                            printf("Entre com o nome do Estado: ");
                            setbuf(stdin,NULL);
                            scanf("%[^\n]", E[i].endComercial.estado1);
                            printf("Cite um Complemento: ");
                            setbuf(stdin,NULL);
                            scanf("%[^\n]",E[i].endComercial.complemento1);
                            setbuf(stdin,NULL);
                            printf("Entre com o CEP: ");
                            setbuf(stdin,NULL);
                            scanf("%d", &E[i].endComercial.cep1);
                                printf("======Data de Nascimento======\n");
                            printf("Entre com o dia: ");
                            scanf(" %d", &E[i].dataNascimento.dia);
                            printf("Entre com o mes: ");
                            scanf(" %d", &E[i].dataNascimento.mes);
                            printf("Entre com o ano: ");
                            scanf(" %d", &E[i].dataNascimento.ano);
                                printf("======Data de Ingresso======\n");
                            printf("Entre com o dia: ");
                            scanf(" %d", &E[i].dataIngresso.dia1);
                            printf("Entre com o mes: ");
                            scanf(" %d", &E[i].dataIngresso.mes1);
                            printf("Entre com o ano: ");
                            scanf(" %d", &E[i].dataIngresso.ano1);
                                printf("======Telefone Comercial======\n");
                            printf("Entre com o ddd: ");
                            scanf(" %d", &E[i].tel.ddd);
                            printf("Entre com o telefone: ");
                            scanf(" %d", &E[i].tel.telefone);
                                printf("======Telefone Residencial======\n");
                            printf("Entre com o ddd: ");
                            scanf(" %d", &E[i].telreside.ddd1);
                            printf("Entre com o telefone: ");
                            scanf(" %d", &E[i].telreside.telefone1);
                            return;
                    }       
                
}
void mostra(cad*A){
    for(int j=0;j<5;j++){//mostrando na tela
        printf("|Dados Pessoais______________________________________________________|\n");
        printf("|Nome:%s\n|Sexo:%s\n|Estado Civil:%s\n", A[j].nome,A[j].sexo,A[j].estadoC);
        printf("|Identidade:%s\n", A[j].rg);
        printf("|CPF:%d                          |Salary:%.2f                        |\n", A[j].CPF, A[j].salary);
        printf("|Endereco Residencial________________________________________________\n");
        printf("|Rua:%s\n|Estado:%s\n|Cidade:%s\n|Complemento:%s                     \n", A[j].endResidencial.rua,A[j].endResidencial.estado,A[j].endResidencial.cidade,A[j].endResidencial.complemento);
        printf("|CEP:%d                          |Numero:%d                          |\n",A[j].endResidencial.cep,A[j].endResidencial.numero);
        printf("|Endereco Comercial__________________________________________________\n");
        printf("|Rua:%s\n|Estado:%s\n|Cidade:%s\n|Complemento:%s                     \n", A[j].endComercial.rua1,A[j].endComercial.estado1,A[j].endComercial.cidade1,A[j].endComercial.complemento1);
        printf("|CEP:%d                          |Numero:%d                          |\n",A[j].endComercial.cep1,A[j].endComercial.numero1);
        printf("|Data de Nascimento______________|Data de Inscricao__________________|\n");
        printf("|%d/%d/%d                         %d/%d/%d\n", A[j].dataNascimento.dia,A[j].dataNascimento.mes,A[j].dataNascimento.ano,A[j].dataIngresso.dia1,A[j].dataIngresso.mes1,A[j].dataIngresso.ano1);
        printf("|Telefone Residencial____________|Telefone Comercial_________________|\n");
        printf("|(%d)%d                           (%d)%d\n", A[j].telreside.ddd1,A[j].telreside.telefone1,A[j].tel.ddd,A[j].tel.telefone);
    }
    return;
}
void copia(cad*A){
    int pos1,pos2;
    printf("Qual posicao voce quer copiar ?\n");
    scanf(" %d", &pos1);
    printf("Em qual posicao voce quer colar ?\n");
    scanf(" %d", &pos2);
    A[pos2]=A[pos1];
}
void nas1990(cad*A){
    for(int j=0;j<5;j++){
        if(A[j].dataNascimento.ano>1990&&A[j].nome[0]!=' '){
        printf("|Dados Pessoais______________________________________________________|\n");
        printf("|Nome:%s\n|Sexo:%s\n|Estado Civil:%s\n", A[j].nome,A[j].sexo,A[j].estadoC);
        printf("|Identidade:%s\n", A[j].rg);
        printf("|CPF:%d                          |Salary:%.2f                        |\n", A[j].CPF, A[j].salary);
        printf("|Endereco Residencial________________________________________________\n");
        printf("|Rua:%s\n|Estado:%s\n|Cidade:%s\n|Complemento:%s                     \n", A[j].endResidencial.rua,A[j].endResidencial.estado,A[j].endResidencial.cidade,A[j].endResidencial.complemento);
        printf("|CEP:%d                          |Numero:%d                          |\n",A[j].endResidencial.cep,A[j].endResidencial.numero);
        printf("|Endereco Comercial__________________________________________________\n");
        printf("|Rua:%s\n|Estado:%s\n|Cidade:%s\n|Complemento:%s                     \n", A[j].endComercial.rua1,A[j].endComercial.estado1,A[j].endComercial.cidade1,A[j].endComercial.complemento1);
        printf("|CEP:%d                          |Numero:%d                          |\n",A[j].endComercial.cep1,A[j].endComercial.numero1);
        printf("|Data de Nascimento______________|Data de Inscricao__________________|\n");
        printf("|%d/%d/%d                         %d/%d/%d\n", A[j].dataNascimento.dia,A[j].dataNascimento.mes,A[j].dataNascimento.ano,A[j].dataIngresso.dia1,A[j].dataIngresso.mes1,A[j].dataIngresso.ano1);
        printf("|Telefone Residencial____________|Telefone Comercial_________________|\n");
        printf("|(%d)%d                           (%d)%d\n", A[j].telreside.ddd1,A[j].telreside.telefone1,A[j].tel.ddd,A[j].tel.telefone);
        }
    }
    return;
}
void menu(){
   setbuf(stdin,NULL);
   char opcao;
   cad cadd[5];

	while(1){
		printf("\nBem vindo ao Sistema de Cadastro de Pessoas");
        printf("\nEscolha uma opcao:");
		printf("\n-a) Listar todos os cadastros");
        printf("\n-b) Cadastrar/Sobrescrever um Cadastro: ");
        printf("\n-c) Lista de pessoas que nasceram depois de 1990.");
        printf("\n-d) Copiar dados de um cadastro para outro.");
		printf("\nDigite opcao: ");
        setbuf(stdin,NULL);
		scanf("%c", &opcao);
        switch(opcao)
        {
            case 'a':
                mostra(cadd);
                    break;
            case 'b':
                ler(cadd);
                    break;
            case 'c':
                nas1990(cadd);
                    break;
            case 'd':
                copia(cadd);
                    break;
            default:
                return;
        }
	}
}

int main(){
    menu();
}