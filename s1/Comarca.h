// Genís Rodriguez Plantalech
// Usuari u1956230
// Sessió 2

#ifndef COMARCA_H
#define COMARCA_H

class Comarca{
public:
    Comarca();
    Comarca(int codi, const string & nom);

    // Pre: cert
    // Post: retorna el codi de la comarca
    int codi() const;

    // Pre: cert
    // Post: retorna el nom de la comarca
    string nom () const;

private:
    int _codi;
    string _nom;
};

#endif