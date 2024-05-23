#include <stdio.h>

int n, j;


int main(void){
    printf("Dame el tamaño del arreglo");
    scanf("%d", &n);
    int i[n];
    for(j=0; j<n; j++){
        printf("Dame el valor del arreglo en la posicion %d:", j );
        scanf("%d", &i[j]);
        
    }
    for(j=0; j<n; j++){

        printf("Elemento %d; \tvalor %d; \t %d\n", j, i[j], &i[j]);

    }
    return 0;

}