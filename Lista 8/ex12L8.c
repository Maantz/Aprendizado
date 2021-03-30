#include <stdio.h> 
#include <string.h> 

int main(void){ 
    char buff[5];
    int pass = 0;
    printf("\n Entre com a senha : \n"); 
    fgets(buff,4,stdin);
    if(strcmp(buff, "1234")){ 
        printf ("\n Senha Errada \n");     
    }
    else{
    printf ("\n Senha Correta \n");
        pass = 1;     
    }
    if (pass) {/* O usuário acertou a senha, poderá continuar*/        
        printf ("\n Acesso liberado \n");     
        } 
else {  
    printf ("\n Acesso negado \n");     
    }
     return 0;  

}
/*ex12
 a) I changed the function gets(buff); by fgets(buff,4,stdin);
 
 b)
    a.123
        Senha errada
            Acesso negado

    b.12345
        Senha errada
            Acesso negado

    c.123456
        Senha errada
            Acesso negado
    */

 
