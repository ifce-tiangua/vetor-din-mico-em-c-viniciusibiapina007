#include <stdio.h>
#include <stdlib.h>

int main(){

    int tam_vetor;
    scanf("%d", &tam_vetor);
    
    int* vetor = (int*) malloc(tam_vetor*sizeof(int));
    
    for(int i = 0; i < tam_vetor; i++){
        
        scanf("%d", &vetor[i]);
    }
    
    printf("[");
    for(int i = 0; i < tam_vetor; i++){
        
        printf("%d", vetor[i]);
        
        if(i != tam_vetor-1)
            printf(", ");
    }
    printf("]");
    
    free(vetor);
    
    return 0;
}
