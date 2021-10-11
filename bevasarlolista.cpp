#include <string>

using namespace std;

struct BevasarloLista {
    string bolt;
    string lista;
};

void operator+=( BevasarloLista& b1, string ujelem){
    if (b1.lista.length() == 0){
        b1.lista = ujelem;
    } else {
        b1.lista = b1.lista + ", " + ujelem;
        }
}
/*
#include <string>

using namespace std;

struct BevasarloLista {
    string bolt;
    string lista;
};

void operator+=(BevasarloLista& lista, const string& uj_elem) {
    if (lista.lista.empty()) {
        lista.lista += uj_elem;
    } else {
        lista.lista += ", ";
        lista.lista += uj_elem;
    }
}
 */
