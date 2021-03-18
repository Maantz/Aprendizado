#include <stdio.h>

int main(){
int    v1 = 1;
double v2 = 2;
char c = 'a'; 
int   *p_v1;
double *p_v2; 
char *p_c;
p_v1 = &v1; 
p_v2 = &v2; 
p_c = &c;
for(int j=-2;j<3;j++){
if(j<0){
    printf("\nEndereco %d de v1 %u",j, p_v1+j); 
    printf("\nEndereco %d de v2 %u",j, p_v2+j); 
    printf("\nEndereco %d de c %u",j, p_c+j);
}else if(j==0){
    printf("\nEndereco de v1 %u", p_v1); 
    printf("\nEndereco de v2 %u", p_v2); 
    printf("\nEndereco de c %u", p_c);
}else if(j>0){
    printf("\nEndereco +%d de v1 %u",j, p_v1+j); 
    printf("\nEndereco +%d de v2 %u",j, p_v2+j); 
    printf("\nEndereco +%d de c %u",j, p_c+j);
}
}
    return 0;
}