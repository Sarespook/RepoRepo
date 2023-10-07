#ifndef STRUCT_H
#define STRUCT_H

typedef struct albero{
    int info;
    struct albero* left;
    struct albero* right;
}albero;


int altezza(albero* a);
int conta_nodi(albero* a);


#endif 