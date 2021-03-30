#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    char nome[50],cPF[15], rg[15],endereco[50],cidade[30],cep[9],estado[30];
    printf("Digite o nome: ");
    setbuf(stdin,NULL);
    gets(nome);
    printf("Digite o CPF: ");
    setbuf(stdin,NULL);
    gets(cPF);
    printf("Digite o RG: ");
    setbuf(stdin,NULL);
    gets(rg);
    printf("Digite o endereco: ");
    setbuf(stdin,NULL);
    gets(endereco);
    printf("Digite o nome da cidade: ");
    setbuf(stdin,NULL);
    gets(cidade);
    printf("Digite o nome do Estado: ");
    setbuf(stdin,NULL);
    gets(estado);
    printf("Digite o CEP: ");
    setbuf(stdin,NULL);
    gets(cep);
    printf("                 DECLARACAO                \n");
    printf("Eu, %s,RG %s,CPF %s,\nresidente a %s ,%s-%s,\nCEP %s venho por meio desta declarar que vou estudar para a prova.", nome, rg, cPF, endereco, cidade, estado, cep);
    


    return 0;
}