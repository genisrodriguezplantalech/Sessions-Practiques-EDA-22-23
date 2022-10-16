#include <iostream>
#include <memory>
#include "ArbreBinari.h"

using namespace std;

const int MIDA = 1000;

// pre: cert
// pos: mostra el recorregut en inordre de l'arbre
void inordre_binari(const ArbreBinari & a);

int main() {
    char entrada[MIDA];
    cin.getline(entrada, MIDA);
    ArbreBinari a(entrada);

    cout << "Inordre: ";
    inordre_binari(a);
    cout << endl;
}

void inordre_binari(const ArbreBinari & a){
    if (!a.esBuit()){
        inordre_binari(a.FillEsquerre());
        cout << a.Contingut() << " " ;
        inordre_binari(a.FillDret());
    }
}
