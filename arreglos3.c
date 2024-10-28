/*
 * Este programa utiliza un apuntadores para invertir el contenido de un arreglo
 *
 */

#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    // TODO: (6) Declara el apuntador al inicio del arreglo
    int *ptr = arr; 
    int temp; 

    // TODO: (7) Declara el apuntador al final del arreglo
    printf("Arreglo original: "); 
    for (int i = 0; i < 5; i++){
        printf("%d ", *(ptr + i)); 
    }
printf("\n"); 
    // TODO: (8) Imprime el arreglo original


    // TODO: (9) Crea un ciclo que invierita el arreglo, TIP: es neceario usar un apuntador temporal
     
     int n = sizeof(arr)/sizeof(arr[0]); 
     for (int i = 0; i < n / 2; i++){
        temp = arr[i]; 
        arr[i] = arr[n - i - 1]; 
        arr[n - i - 1] = temp; 
     }
    // Mostrar el arreglo invertido
    printf("[ ");
    for (int i = 0; i < 5; i++) {
        printf("%d, ", arr[i]);
    }
    printf(" ]\n");
    
    return 0;
}
