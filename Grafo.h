#ifndef GRAFO_H
#define GRAFO_H

#include "Aresta.h"
#include <vector>
// #include <list>

class Grafo {
public:
    Grafo(int num_vertices);
    
    int num_vertices();
    int num_arestas();

    bool tem_aresta(Aresta e);
    void insere_aresta(Aresta e);
    void remove_aresta(Aresta e);
    void imprime();
private:
    std::vector<std::vector<int>> matriz_adj_;
    // std::list<std::list<int>> matriz_adj_;
    int num_vertices_;
    int num_arestas_;
};

#endif