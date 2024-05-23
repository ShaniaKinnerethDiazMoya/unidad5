#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    int i,x;
    char *buffer, *p_buffer;
     
    printf("Teclea la longitud del arreglo");
    scanf("%d", &x);

    buffer = (char*)malloc((x+1)*sizeof(char));
    if(buffer==NULL)exit(1);

    p_buffer = buffer;

    for(i=0; i<x; i++){
        printf("Ingrese el caracter %d \n", i);
        scanf("%s", p_buffer++);
    }


    p_buffer = buffer;
    
    for(i=x; i>0; i--){

        printf("arreglo[%d] = %c \n",i, *p_buffer--);
    }

    free(buffer); 
    

}