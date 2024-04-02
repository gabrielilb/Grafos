#include "Grafo.h"
#include <iostream>

using namespace std;

int main() {
    try {
        int num_vertices;

        cout << "Digite o numero de vertices do Grafo: ";
        cin >> num_vertices;
    
        Grafo grafo(num_vertices);
        // Grafo grafo(4);    
        Aresta aresta(0, 1);

        grafo.insere_aresta(aresta);
        grafo.insere_aresta(Aresta(0, 2));
        grafo.insere_aresta(Aresta(1, 2));
        grafo.insere_aresta(Aresta(1, 3));
        grafo.insere_aresta(Aresta(2, 3));
        grafo.imprime();
    }
    catch (const exception &e) {
        cerr << "exception: " << e.what() << "\n";
    }

    return 0;
}
