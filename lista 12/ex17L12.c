int imprime_vet_int(int *i, int n){
    for(int j=0;j<n;j++){
    printf("Vetor[%d] = %d\n", j, i[j]);
    }
}

float imprime_vet_float(float *i, int n){
    for(int j=0;j<n;j++){
    printf("Vetor[%d] = %.2f\n", j, i[j]);
    }
}

double imprime_vet_double(double *i, int n){
    for(int j=0;j<n;j++){
    printf("Vetor[%d] = %.2lf\n", j, i[j]);
    }
}
//pega o maior e menor vet em double
double maior_vet(double *vet, int n){
    double maior;
    maior =  vet[0];
    for(int i=0;i<n;i++){
        if(maior<vet[i]){
            maior = vet[i];
        }
    }
    return maior;
}
double menor_vet(double *vet, int n){
    double menor;
    menor =  vet[0];
    for(int i=0;i<n;i++){
        if(menor>vet[i]){
            menor = vet[i];
        }
    }
    return menor;
}
//pega o maior e o menor em int
int maior_vet(int *vet, int n){
    int maior;
    maior =  vet[0];
    for(int i=0;i<n;i++){
        if(maior<vet[i]){
            maior = vet[i];
        }
    }
    return maior;
}
int menor_vet(int *vet, int n){
    int menor;
    menor =  vet[0];
    for(int i=0;i<n;i++){
        if(menor>vet[i]){
            menor = vet[i];
        }
    }
    return menor;
}