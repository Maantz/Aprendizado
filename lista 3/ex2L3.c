#include <stdio.h>
#include <stdlib.h>

int main(void){
    float temp, fare, cel;
    char uni;
    printf("Conversor de Temperatura\n");
    printf("Digite a temperatura: ");
    scanf("%f", &temp);
    printf("Digite a unidade: ");
    setbuf(stdin, NULL);
    scanf("%c", &uni);
    fare = temp * (9.00/5.00) + 32.0;
    cel = (temp-32) * (5.00/9.00);
    switch(uni){
        case 'c':
        printf("%.1f em Celsius equivale a %.1f em Farenheit\n", temp, fare);break;
        case 'C':
        printf("%.1f em Celsius equivale a %.1f em Farenheit\n", temp, fare);break;
        case 'F':
        printf("%.1f em Farenheit equivale a %.1f em Celsius\n", temp, cel);break;
        case 'f':
        printf("%.1f em Farenheit equivale a %.1f em Celsius\n", temp, cel);break;
        default:
        printf("Unidade de Medida de Temperatura Invalida\n");
        }
    return 0;
}