#ifndef ARBREBINARI_H
#define ARBREBINARI_H

#include <iostream>
#include <memory>

using namespace std;

class ArbreBinari{
    public:
        ArbreBinari();
        ArbreBinari(const char t[]);
        ArbreBinari(const ArbreBinari &a, const ArbreBinari &b, char &c);
        bool esBuit() const;
        ArbreBinari FillDret() const;
        ArbreBinari FillEsquerre() const;
        char Contingut() const;
        // no té destructor.
  private:
        struct node {
            char dada;
            shared_ptr<node> fe, fd;
            node();
            node(const shared_ptr<node> & a, const shared_ptr<node> & b, char & c);
        };

        shared_ptr<node>  arrel;

        shared_ptr<ArbreBinari::node> iArbreBinari(const char t[], int &i); // mètode auxiliar del constructor
};

#endif // DADES_H
