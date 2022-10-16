// Genís Rodriguez Plantalech
// Usuari u1956230
// Sessió 2

#include "Estacio.h"

Estacio::Estacio(){
    codi = "*";
}

Estacio::Estacio(const string & codi, double altitud, double latitud, double longitud, const string & nom, const string & municipi, int comarca){
    _codi = codi;
    _altitud = altitud;
    _latitud = latitud;
    _longitud = longitud;
    _nom = nom;
    _municipi = municipi;
    _comarca = comarca;
}

string Estacio::codi() const{
    return _codi;
}

string Estacio::nom() const {
    return _nom;
}

double Estacio::altitud() const {
    return _altitud;
}

double Estacio::longitud() const {
    return _longitud;
}

double Estacio::latitud() const {
    return _latitud
}

string Estacio::municipi() const {
    return _municipi;
}

int Estacio::comarca() const {
    return _comarca;
}