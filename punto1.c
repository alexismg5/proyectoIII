#include <stdio.h>
int main(void){
// ------- 1 -) 
 int x, y, z;
	printf("Ingrese un valor para x\n"); 
	scanf("%d", &x); 
	printf("Ingrese un valor para y\n");
	scanf("%d", &y);
    printf("Ingrese un valor para z\n"); 
	scanf("%d", &z); 
	
	printf("Expresion 1 -> x + y + 1 = %d \n", x+y+1);
    printf("Expresion 2 -> z * z + y * 45 - 15 * x = %d \n", z * z + y * 45 - 15 * x);
    //printf("Expresion 3 -> y - 2 == (x * 3 + 1) % 5 = %d \n", y - 2 == (x * 3 + 1) % 5);
    printf("Expresion 4 -> y / 2 * x = %d \n", y / 2 * x);
    printf("Expresion 5 -> y < x *z = %d \n", y < x * z);
// ------ 1-) a-)
//  Es de tipo Int 

       return 0;
}