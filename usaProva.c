#include <stdlib.h>
#include "struct.h"



int altezza(albero* a){

    if (a==NULL) return -1;

    int left=altezza(a->left);
    int right=altezza(a->right);

    if(left>right) return left+1;
    
    return right+1;
}


int conta_nodi(albero* a){
    if(a==NULL) return 0;
     
    int left=conta_nodi(a->left);
    int right=conta_nodi(a->right);

    return left+right+1;
}