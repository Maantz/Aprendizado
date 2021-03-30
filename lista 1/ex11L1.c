#include <stdio.h>
#include <math.h>

typedef struct complexo{
   float real[3];
   float imaginario[3];
}complexo;

leitura_(complexo*comp){
    printf("Informe a parte real de  z: ");
    scanf("%f", &comp->real[0]);
    printf("Informe a parte imaginaria de  z: ");
    scanf("%f", &comp->imaginario[0]);
    printf("Informe a parte real de w: ");
    scanf("%f", &comp->real[1]);
    printf("Informe a parte imaginaria de w: ");
    scanf("%f", &comp->imaginario[1]);
}

soma_(complexo*comp){
    comp->real[2] = comp->real[0]+comp->real[1];
    comp->imaginario[2]= comp->imaginario[0]+comp->imaginario[1];
    return printf("z + w = %.1f + %.1fi\n", comp->real[2], comp->imaginario[2]);
}
subtrai_(complexo*comp){
    comp->real[2] = comp->real[0]-comp->real[1];
    comp->imaginario[2]= comp->imaginario[0]-comp->imaginario[1];
    return printf("z - w = %.1f + %.1fi\n", comp->real[2], comp->imaginario[2]);
}
multiplica_(complexo*comp){
    comp->real[2] = comp->real[0]*comp->real[1]-comp->imaginario[0]*comp->imaginario[1];
    comp->imaginario[2]=comp->real[0]*comp->imaginario[1] + comp->imaginario[0]*comp->real[1];
    return printf("z x w = %.1f + %.1fi\n", comp->real[2], comp->imaginario[2]);
}
modulos_(complexo*comp){
    float z, w;
    z = sqrt(comp->real[0]*comp->real[0]+comp->imaginario[0]*comp->imaginario[0]);
    w = sqrt(comp->real[1]*comp->real[1]+comp->imaginario[1]*comp->imaginario[1]);
    return printf("|z|=%.4f\n|w|=%.4f\n", z, w);
}





int main(void){
    complexo comp;
    void *p;
    p = &comp;
    
    printf("=========================\n");
    printf("     Numeros Complexos   \n");
    printf("=========================\n\n");
    
    leitura_(p);
    soma_(p);
    subtrai_(p);
    multiplica_(p);
    modulos_(p);
    
    //printf("R de Z= %.1f\nI de Z= %.1f\nR de W= %.1f\nI de W= %.1f\n", comp->real[0],comp->imaginario[0],comp->real[1],comp->imaginario[1] ); <- Usei pra verificar se estava salvando corretamente no vetor
    
    system("pause");
    return 0;


}