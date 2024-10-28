#include <stdio.h>

int main(){
    int arr[]= {1, 2, 3, 4, 5};
  
    //TODO: (4) Declara un apuntador que apunte al primer elemento del arreglo
  int *ptr = arr; 

    //TODO: (5) Recorre el arreglo utilizando notación de punteros
for (int i = 0; i < 5; i++){
    printf("%d ", *(ptr + i)); 
}
    return 0;
}
// prueba 