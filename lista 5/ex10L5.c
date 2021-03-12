#include <stdio.h>

int main(){
    printf("<< Subtracao de vetores >>\n");
    int A[3], B[3], C[3];
    for(int i=0;i<3;i++){
        printf("Digite o valor %d de A: ", i+1);
        scanf("%d", &A[i]);
    }
     for(int j=0;j<3;j++){  
        printf("Digite o valor %d de B: ", j+1);
        scanf("%d", &B[j]);
        }
     for(int k=0;k<3;k++){
            C[k] = A[k]- B[k];
        }
    
    printf("O vetor C, definido como C = A-B e (%d,%d,%d)", C[0], C[1], C[2]);
    return 0;
}