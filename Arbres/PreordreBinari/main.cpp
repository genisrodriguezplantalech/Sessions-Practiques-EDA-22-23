#include <iostream>
#include <memory>
#include "ArbreBinari.h"

using namespace std;

const int MIDA = 1000;

// pre: cert
// pos: mostra el recorregut en preordre de l�arbre
void preordre_binari(const ArbreBinari & a);

int main() {
    char entrada[MIDA];
    cin.getline(entrada, MIDA);
    ArbreBinari a(entrada);

    cout << "Preordre: ";
    preordre_binari(a);
    cout << endl;
}

void preordre_binari(const ArbreBinari & a){
    if (!a.esBuit()){
        cout << a.Contingut() << " " ;
        preordre_binari(a.FillEsquerre());
        preordre_binari(a.FillDret());
    }
}
