/*
 * Este programa utiliza un apuntadores para invertir el contenido de un arreglo
 *
 */

#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    // TODO: (6) Declara el apuntador al inicio del arreglo
    // TODO: (7) Declara el apuntador al final del arreglo
    

    // TODO: (8) Imprime el arreglo original

    // TODO: (9) Crea un ciclo que invierita el arreglo, TIP: es neceario usar un apuntador temporal
    
    // Mostrar el arreglo invertido
    printf("[ ");
    for (int i = 0; i < 5; i++) {
        printf("%d, ", arr[i]);
    }
    printf(" ]\n");
    
    return 0;
}
