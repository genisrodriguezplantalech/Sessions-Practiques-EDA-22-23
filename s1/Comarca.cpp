// Genís Rodriguez Plantalech
// Usuari u1956230
// Sessió 2

#include "Comarca.h"

Comarca::Comarca() {
    _codi = -1;
}

Comarca::Comarca(int codi, const int &nom) {
    _codi = codi;
    _nom = nom;
}

int Comarca::codi() const {
    return _codi;
}

string Comarca::nom() const {
    return _nom;
}