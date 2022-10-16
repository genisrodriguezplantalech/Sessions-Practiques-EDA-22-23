// Genís Rodriguez Plantalech
// Usuari u1956230
// Sessió 2

#include "Variable.h"

Variable::Variable(){
    codi = -1;
}

Variable::Variable(int codi, const string & nom, const string & unitat){
    _codi = codi;
    _nom = nom;
    _unitat = unitat;
}

int Variable::codi() const {
    return _codi;
}

string Variable::nom() const {
    return _nom;
}

string Variable::unitat() const {
    return _unitat;
}