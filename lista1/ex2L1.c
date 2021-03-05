#include <stdio.h>
#include <stdlib.h>

int main(void){
    float temp, fare;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temp);
    fare = temp * (9.00/5.00) + 32.0; 
    printf("%.0f em Graus Fahrenheit sao %.1f", temp, fare);
    return 0;
}