//7)Utilizando aritmética de ponteiros, mostre na tela o conteúdo da string char nome[] = “José Augusto”. Utilize o   printf com %c e não %s
#include <stdio.h>

int main(){
    char nome[] = "Jose Augusto";
    char *p;
    p = &nome[0];
    for(*p ;*p != '\0';*p++){
        printf("%c", *p);
    }

    return 0;
}