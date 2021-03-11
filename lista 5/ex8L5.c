#include <stdio.h>
#include <math.h>

int main(){
    float vet[6], soma=0, media;
    float var=0;
    printf("<< Media e desvio-padrao >>\n");
    for(int i=0;i<5;i++){
    printf("Digite o valor %d: ", i+1);
    scanf("%f", &vet[i]);
        soma+=vet[i];
    }
     media = soma/5;
    for(int g=0;g<5;g++){
        var += pow((vet[g] - media), 2);     
        }
    
    
    printf("A media e %.0f e a variancia e %g", media, sqrt(var/5));
    return 0;
}
