#include "Grafo.h"
#include <iostream>

using namespace std;

int main() {
    try {
        int num_vertices;

        cout << "Digite o número de vértices do Grafo: ";
        cin >> num_vertices;
    
        Grafo grafo(num_vertices);
    }
    catch (const exception &e) {
        cerr << "exception: " << e.what() << "\n";
    }

    return 0;
}
