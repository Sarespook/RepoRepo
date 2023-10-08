#ifndef STRUCT_H
#define STRUCT_H

typedef struct albero{
    int info;
    struct albero* left;
    struct albero* right;
}albero;

typedef struct elem_lista_archi* elem_archi;
typedef struct elem_lista_nodi*  elem_nodi;


typedef struct nodo{
    int info;
    int color;
}nodo;

typedef struct arco{
    int info;
}arco;

typedef struct elem_lista_nodi{
    nodo info;
    elem_archi from;
    elem_archi to;
    elem_nodi pos;
}elem_lista_nodi;



typedef struct elem_lista_archi{
    arco info;
    elem_archi frompos;
    elem_archi topos;
    elem_archi pos;
}elem_lista_archi;

int altezza(albero* a);
int conta_nodi(albero* a);


#endif 