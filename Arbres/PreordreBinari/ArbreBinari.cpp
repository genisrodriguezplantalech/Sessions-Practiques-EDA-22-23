#include "ArbreBinari.h"

ArbreBinari::node::node() {
fe = fd = NULL;
}

ArbreBinari::node::node(const shared_ptr<node> &a, const shared_ptr<node> &b, char &c) {
    fe = a;
    fd = b;
    dada = c;
}

ArbreBinari::ArbreBinari(){
    arrel = NULL;
}

ArbreBinari::ArbreBinari(const ArbreBinari &a, const ArbreBinari &b, char &c){
    arrel = shared_ptr<node>(new node(a.arrel, b.arrel, c));
}

ArbreBinari::ArbreBinari(const char t[]){
    int i = 0;
    arrel = iArbreBinari(t, i);
}

shared_ptr<ArbreBinari::node> ArbreBinari::iArbreBinari(const char *t, int&i){
    shared_ptr<node> aux1, aux2;
    char c = t[i];
    i++;
    if(t[i] != '(')
        aux1 = aux2 = NULL;
    else{
        i++;
        if(t[i] == ' '){
            aux1 = NULL;
            i++;
            if(t[i] != ' '){
                aux2 = iArbreBinari(t, i);
            }
        }
        else{
            aux1 = iArbreBinari(t, i);
            if(t[i] != ' '){
                aux2 = NULL;
                i++;
            }
            else{
                i++;
                aux2 = iArbreBinari(t, i);
                i++;
            }
        }
    }
    shared_ptr<node> res(new node(aux1, aux2, c));
    return res;
}

bool ArbreBinari::esBuit() const{
    return arrel == NULL;
}

ArbreBinari ArbreBinari::FillEsquerre() const{
    ArbreBinari res;
    if(esBuit())
        throw("L’arbre es buit");
    else
        res.arrel = arrel->fe;
    return res;
}

ArbreBinari ArbreBinari::FillDret() const{
    ArbreBinari res;
    if(esBuit())
        throw("L’arbre es buit");
    else
        res.arrel = arrel->fd;
    return res;
}

char ArbreBinari::Contingut() const{
    char res;
    if(esBuit())
        throw("L’arbre es buit");
    else
        res = arrel->dada;
    return res;
}

