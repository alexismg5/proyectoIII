#include <stdio.h>
#include <stdbool.h>

int main(void){
    int x = 8;
    int y = (-8); 
    int z = 16; 
    bool w = 1==1; 
    bool b = 2==2;
 
    if(x % 4 == 0){
        printf("Primera expresion -> True\n");
    }
    else{
        printf("Primera expresion -> False\n");
    }
    //---


    if(x + y == 0 && y - x == (-1) * z ){
        printf("Seguda expresion -> True\n");
    }
    else{
        printf("Seguda expresion -> False\n");
    }
    //---

    
    if(!b && w){
        printf("Tercera expresion -> True\n");
    }
    else{
        printf("Tercera expresion -> False\n");
    }

    return 0;
}
