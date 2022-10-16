// Genís Rodriguez Plantalech
// Usuari u1956230
// Sessió 2

#ifndef ESTACIO_H
#define ESTACIO_H

#include <vector>
#include "Lectura.h"

class Estacio{
public:
    Estacio();
    Estacio(const string & codi, double altitud, double latitud, double longitud, const string & nom, const string & municipi, int comarca);

    // Pre: cert
    // Post: retorna el codi de l’estació
    string codi() const;

    // Pre: cert
    // Post: retorna el nom de l'estació
    string nom() const;

    // Pre: cert
    // Post: retorna l'altitud de l'estació
    double altitud() const;

    // Pre: cert
    // Post: retorna la latitud
    double latitud() const;

    // Pre: cert
    // Post: retorna la longitud
    double longitud() const;

    // Pre: cert
    // Post: retorna el nom del municipi on està l’estació
    string municipi() const;

    // Pre: cert
    // Post: retorna el codi de la comarca on està l’estació
    int comarca() const;

    // Pre: cert
    // Post: afegeix l a la llista de Lectura que ocupa la posició del vector determinada pel codi de la variable meteorològica de l
    void afegeixLectura(const Lectura & l);

    // Pre: cert
    // Post: retorna una llista un vector de llistes amb totes les lectures de l’estació
    const vector <list<Lectura>> & lectures() const;

private:
    string _codi;
    double _altitud;
    double _latitud;
    double _longitud;
    string _nom;
    string _municipi;
    int _comarca;


};

#endif