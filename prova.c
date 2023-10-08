#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

void main(){
    
    albero* a = (albero*)malloc(sizeof(albero));
    albero* right_son= (albero*)malloc(sizeof(albero));
    albero* left_son = (albero*)malloc(sizeof(albero));
    a->info=0;
    a->left=left_son;
    a->right=right_son;
    
    printf("il numero dei nodi e' : %d\n",conta_nodi(a));
    printf("l'altezza dell'albero e' : %d\n",altezza(a));

    printf("ho aggiunto delle strutture dati balorde in piu\n");

}


