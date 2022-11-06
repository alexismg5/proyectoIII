#include <stdio.h> 
#include <stdbool.h> 


bool pedirBool(void)
{
    bool x;

    printf ("Da un valor booleano:\n");
    scanf ("%d", &x);

    return x;
}
bool imprimeBooleano(bool v){
    if(v){
        printf("Verdadero");
    }
    else{
        printf("Falso");
    }
}

int main(){

    return 0;
}