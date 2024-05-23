#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,j;
    
    printf("Teclea la longitud de la cadena");
    scanf("%d", &n);
    int * buffer;

    buffer = (int*)malloc((n+1)*sizeof(int));
    if(buffer==NULL)exit(1);

    for(j=0;j<n;j++){
        printf("Dame el valor del arreglo en la posicion %d:", j );
        scanf("%d", &buffer[j]);
        
        
    }
    for(j=0; j<n; j++){

        printf("Elemento %d; \tvalor %d; \n ", j, buffer[j]);

    }
    
    buffer[n]='\0';

    free(buffer);
    return 0;
}