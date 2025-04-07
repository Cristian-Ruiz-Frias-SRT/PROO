//Cristian ruiz frias 
#include <iostream>
#include <string.h>

using namespace std;

class Pila {
private:
    class Nodo {
    public:
        char simbolo;
        Nodo *sig;
    };

    Nodo *raiz;

public:
    Pila();
    ~Pila();
    void insertar(char x);
    char extraer();
    bool vacia();
};

Pila::Pila() {
    raiz = NULL;
}

void Pila::insertar(char x) {
    Nodo *nuevo;
    nuevo = new Nodo();
    nuevo->simbolo = x;
    if (raiz == NULL) {
        raiz = nuevo;
        nuevo->sig = NULL;
    } else {
        nuevo->sig = raiz;
        raiz = nuevo;
    }
}

char Pila::extraer() {
    if (raiz != NULL) {
        char informacion = raiz->simbolo;
        Nodo *bor = raiz;
        raiz = raiz->sig;
        delete bor;
        return informacion;
    } else {
        return ' ';
    }
}

bool Pila::vacia() {
    if (raiz == NULL)
        return true;
    else
        return false;
}

Pila::~Pila() {
    Nodo *reco = raiz;
    Nodo *bor;
    while (reco != NULL) {
        bor = reco;
        reco = reco->sig;
        delete bor;
    }
}

class Formula {
    char cadena[100];

public:
    Formula();
    bool balanceada();
};

Formula::Formula() {
    // Implementación pendiente
}

bool Formula::balanceada() {
    // Implementación pendiente
    return true;  // Solo como referencia
}

int main() {
    Formula *formula1;
    formula1 = new Formula();
    if (formula1->balanceada() == true) {
        cout << "La formula esta correctamente balanceada";
    } else {
        cout << "La formula no esta correctamente balanceada";
    }
    delete formula1;
    return 0;
}
