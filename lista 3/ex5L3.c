#include <stdio.h>

int main(){
    float massa, altura, imc;
    printf("Calculador de Indice de Massa Corporal>>\n");
    printf("Informe a sua massa em KG: ");
    scanf("%f", &massa);
    printf("Informe a sua altura em m: ");
    scanf("%f", &altura);
    imc = massa/(altura*altura);
    if(imc<18.5){
        printf("Magreza\n");
    }else if(imc>=18.5||imc<=24.9){
        printf("Saudavel\n");
    }
    else if(imc>=25.0||imc<=29.9){
        printf("Sobrepeso\n");
    }
    else if(imc>=30.0||imc<=34.9){
        printf("Obesidade Grau I\n");
    }
    else if(imc>=35.0||imc<=39.9){
        printf("Obesidade Grau II(Severa)\n");
    }
    else if(imc>=40.0){
        printf("Obesidade Grau III(Morbida)\n");
    }
    return 0;
}