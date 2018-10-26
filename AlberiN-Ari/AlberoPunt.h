
#ifndef ALBEROPUNT_H
#define ALBEROPUNT_H

#include <iostream>

template<class T>
struct nodoN {
    T elem;
    nodoN<T> *padre;
    nodoN<T> *primofiglio;
    nodoN<T> *fratello;
};

template<class T>
class AlberoPunt {
public:
    AlberoPunt();  // costruttore
    ~AlberoPunt();  //distruttore

    // operatori
    void creaAlbero();

    bool alberoVuoto();

    nodoN<T> *radice();

    nodoN<T> *padre(nodoN<T> *);

    nodoN<T> *primoFiglio(nodoN<T> *);

    nodoN<T> *succFratello(nodoN<T> *);

    bool ultimoFratello(nodoN<T> *);

    bool foglia(nodoN<T> *);

    void cancSottoAlbero(nodoN<T> *);

    T leggiNodo(nodoN<T> *);

    void scriviNodo(T, nodoN<T> *);

    void insRadice();

    void insSottoAlbero(nodoN<T> *, nodoN<T> *, AlberoPunt<T> &);

    // funzione ausiliaria
    void insNodo(nodoN<T> *, nodoN<T> *);

private:
    nodoN<T> *tree;
};

template<class T>
AlberoPunt<T>::AlberoPunt() {
    creaAlbero();
}

template<class T>
AlberoPunt<T>::~AlberoPunt() {
}

template<class T>
void AlberoPunt<T>::creaAlbero() {
    tree = NULL;
}

template<class T>
bool AlberoPunt<T>::alberoVuoto() {
    return tree == NULL;
}

template<class T>
nodoN<T> *AlberoPunt<T>::radice() {
    if (!alberoVuoto())
        return tree;
    else
        std::cout << "\n L'albero e' vuoto";
}

template<class T>
nodoN<T> *AlberoPunt<T>::padre(nodoN<T> *u) {
    if (!alberoVuoto() && u != radice())
        return u->padre;
    else
        return NULL;
}

template<class T>
nodoN<T> *AlberoPunt<T>::primoFiglio(nodoN<T> *u) {
    if (!alberoVuoto())
        return u->primofiglio;
    else
        return NULL;
}

template<class T>
nodoN<T> *AlberoPunt<T>::succFratello(nodoN<T> *u) {
    if (!alberoVuoto())
        return u->fratello;
}

template<class T>
bool AlberoPunt<T>::ultimoFratello(nodoN<T> *u) {
    if (succFratello(u) == NULL)
        return true;
    else
        return false;
}

template<class T>
bool AlberoPunt<T>::foglia(nodoN<T> *u) {
    return u->primofiglio == NULL;
}

template<class T>
void AlberoPunt<T>::cancSottoAlbero(nodoN<T> *u) {
    nodoN<T> *corrente;
    nodoN<T> *prec;
    if (!alberoVuoto()) {//controlla che l'albero non sia vuoto
        if (!foglia(u))
            cancSottoAlbero(primoFiglio(u));
        else {
            //individuo il primo tra i fratelli di u e lo pongo in corrente
            corrente = u->padre->primofiglio;
            if (corrente == u) //se il corrente � proprio u
                //pongo come primo figlio il fratello successivo di u
                u->padre->primofiglio = u->fratello;
            else {  //altrimenti
                //scandisco i fratelli fino a trovare u
                while (corrente != u) {
                    //memorizzando in prec il fratello che lo precede
                    prec = corrente;
                    corrente = corrente->fratello;
                }
                //trovato u pongo come fratello del suo predecessore,
                //il fratello dello stesso u (scavalcandolo)
                prec->fratello = u->fratello;
            }
            delete u;
        }
    }
    return;
}

template<class T>
T AlberoPunt<T>::leggiNodo(nodoN<T> *u) {
    if (!alberoVuoto())
        return u->elem;
}

template<class T>
void AlberoPunt<T>::scriviNodo(T a, nodoN<T> *u) {
    u->elem = a;
    return;
}

template<class T>
void AlberoPunt<T>::insRadice() {
    nodoN<T> *u = new (nodoN<T>);
    u->padre = NULL;
    u->primofiglio = NULL;
    u->fratello = NULL;
    tree = u;
    return;
};

template<class T>
void AlberoPunt<T>::insSottoAlbero(nodoN<T> *u, nodoN<T> *v, AlberoPunt<T> &S) {
    if (!alberoVuoto()) {
        if (u == v) {
            S.radice()->padre = u;
            S.radice()->fratello = u->primofiglio;
            u->primofiglio = S.radice();
        } else {
            S.radice()->padre = u;
            S.radice()->fratello = v->fratello;
            v->fratello = S.radice();
        }
    } else

        tree = S.radice();
    return;
}

#endif 
