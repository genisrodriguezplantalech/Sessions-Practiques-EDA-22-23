// Genís Rodriguez Plantalech
// Usuari u1956230
// Sessió 2

#ifndef VARIABLE_H
#define VARIABLE_H

class Variable{
public:
    Variable();
    Variable(int codi, const string & nom, const string & unitat);

    // Pre: cert
    // Post: retorna el codi de la variable
    int codi() const;

    // Pre: cert
    // Post: retorna el nom de la variable
    string nom() const;

    // Pre: cert
    // Post: retorna la unitat de la variable
    string unitat() const;

private:
    int _codi;
    string _nom;
    string _unitat;
}

#endif