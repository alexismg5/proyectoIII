#include <stdio.h>
#include <assert.h>

int main(){
  int x;
  int y;
  printf("Dar un estado a (x):\n");
  scanf("%d",&x);
  printf("Dar un estado a (y):\n");
  scanf("%d",&y);
  printf("Estado actual de x -> %d \n", x);
  printf("Estado actual de y -> %d \n", y);
  printf("Luego de la asignacion...\n");
  printf("Estado actual de x -> %d \n", x + y);
  printf("Estado actual de y -> %d \n", y);

  //--- 
  printf("Dar un 2do estado a (x):\n");
  scanf("%d",&x);
  printf("Dar un 2do estado a (y):\n");
  scanf("%d",&y);
  printf("Estado actual de x -> %d \n", x);
  printf("Estado actual de y -> %d \n", y);
  printf("Luego de la asignacion...\n");
  printf("Estado actual de x -> %d \n", x + y);
  printf("Estado actual de y -> %d \n", y);  
  //--
  printf("Dar un 3er estado a (x):\n");
  scanf("%d",&x);
  printf("Dar un 3er estado a (y):\n");
  scanf("%d",&y);
  printf("Estado actual de x -> %d \n", x);
  printf("Estado actual de y -> %d \n", y);
  printf("Luego de la asignacion...\n");
  printf("Estado actual de x -> %d \n", x + y);
  printf("Estado actual de y -> %d \n", y);
}