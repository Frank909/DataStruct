#ifndef ALBERON_H
#define ALBERON_H

#include <iostream>
#include "ListP.h"

#define MAXNODES 100

using namespace std;

template<class T>
class AlberoN {
public:

    typedef T item;
    typedef int nodo;

    AlberoN();

    void creaAlbero();

    bool alberoVuoto() const;

    void insRadice(nodo);

    nodo radice() const;

    nodo parente(nodo) const;

    bool foglia(nodo) const;

    nodo primoFiglio(nodo) const;

    bool fineFratelli(nodo) const;

    nodo succFratello(nodo) const;

    void insPrimoSottoAlbero(nodo, AlberoN<T> &);

    void insSottoAlbero(nodo, AlberoN<T> &);

    void cancSottoAlbero(nodo);

    void insPrimo(nodo, item);

    void insFratello(nodo, item);

    void scriviNodo(nodo, item);

    item leggiNodo(nodo) const;

    int getNumNodi() const;

    void print() const;

private:

    struct Record {
        item e;
        bool usati;
        ListP<int> childs;
    };


    typedef ListP<int>::position posizione_lista;

    Record nodi[MAXNODES];
    nodo rad;
    int numNodi;

//visita in preordine pi� aggiunta di tree all'albero.
    void visitaPreOrdine(nodo, nodo, AlberoN<T> &);

};

template <class T>
AlberoN<T>::AlberoN() {
}

template<class T>
void AlberoN<T>::print() const {
    cout << "\n{";
    for (int i = 0; i < MAXNODES; i++) {
        if (nodi[i].usati) {
            cout << "\n  " << leggiNodo(i) << ":  ";
            if (!foglia(i)) {
                posizione_lista child = nodi[i].childs.begin();
                while (!nodi[i].childs.end(child)) {
                    cout << leggiNodo(nodi[i].childs.read(child)) << " ";
                    child = nodi[i].childs.next(child);
                }
            }
        }
    }
    cout << "\n}\n";
}

template<class T>
void AlberoN<T>::creaAlbero() {
    numNodi = 0;
    for (int i = 0; i < MAXNODES; i++) {
        nodi[i].usati = false;
        nodi[i].childs.create();
    }
}

template<class T>
bool AlberoN<T>::alberoVuoto() const {
    return (numNodi == 0);
}

template<class T>
void AlberoN<T>::insRadice(nodo n) {
    if (alberoVuoto()) {
        rad = 0;
        nodi[0].usati = true;
        numNodi++;
    }
}

template<class T>
typename AlberoN<T>::nodo AlberoN<T>::radice() const {
    return (int) radice;
}

template<class T>
typename AlberoN<T>::nodo AlberoN<T>::parente(nodo n) const {
    posizione_lista child;
    int p;
    for (int i = 0; i < MAXNODES; i++) {
        if (!nodi[i].childs.empty()) {
            child = nodi[i].childs.begin();
            bool trovato = false;
            while (!nodi[i].childs.end(child) && !trovato) {
                if (nodi[i].childs.read(child) == n) {
                    trovato = true;
                    p = i;
                }
                child = nodi[i].childs.next(child);
            }
            if (trovato)
                return (i);
        }
    }
}

template<class T>
bool AlberoN<T>::foglia(nodo n) const {
    return (nodi[n].childs.empty());
}

template<class T>
typename AlberoN<T>::nodo AlberoN<T>::primoFiglio(nodo n) const {
    if (!foglia(n)) {
        return (nodi[n].childs.read(nodi[n].childs.begin()));
    }
}

template<class T>
bool AlberoN<T>::fineFratelli(nodo n) const {
    posizione_lista c;
    nodo p = parente(n);
    c = nodi[p].childs.begin();
    while (!nodi[p].childs.end(c))
        c = nodi[p].childs.next(c);
    return (n == nodi[p].childs.read(c));
}

template<class T>
typename AlberoN<T>::nodo AlberoN<T>::succFratello(nodo n) const {
    if (!fineFratelli(n)) {
        posizione_lista c;
        nodo p = parente(n);
        c = nodi[p].childs.begin();
        while (!nodi[p].childs.end(c)) {
            if (nodi[p].childs.read(c) == n)
                return (nodi[p].childs.read(nodi[p].childs.next(c)));
            c = nodi[p].childs.next(c);
        }
    }
}

// inserisce un nodo come firstChild di n
template<class T>
void AlberoN<T>::insPrimo(nodo n, item el) {
    // cerca una posizione libera
    int k;
    for (k = 0; k < MAXNODES && nodi[k].usati; k++);
    if (k < MAXNODES) {
        nodi[k].usati = true;
        nodi[k].e = el;
        nodi[n].childs.insert(k, nodi[n].childs.begin());
    }
}

// inserisce un nodo come fratello di n
template<class T>
void AlberoN<T>::insFratello(nodo n, item el) {
    // cerca una posizione libera
    int k;
    for (k = 0; k < MAXNODES && nodi[k].usati; k++);
    if (k < MAXNODES) {
        nodi[k].usati = true;
        nodi[k].e = el;
        nodo p = parente(n);
        posizione_lista child = nodi[p].childs.begin();
        bool trovato = false;
        while (!nodi[p].childs.end(child) && !trovato) {
            if (nodi[p].childs.read(child) == n)
                trovato = true;
            child = nodi[p].childs.next(child);
        }
        nodi[p].childs.insert(k, child);
    }
}


template<class T>
void AlberoN<T>::cancSottoAlbero(nodo n) {
    posizione_lista c;
    if (!foglia(n)) {
        while (!nodi[n].childs.begin()) {
            cancSottoAlbero(nodi[n].childs.read(nodi[n].childs.begin()));
        }
    }
    nodo p = parente(n);
    c = nodi[p].childs.begin();
    while (nodi[p].childs.read(c) != n)
        c = nodi[p].childs.next(c);
    nodi[p].childs.erase(c);
    nodi[n].usati = false;
}

template<class T>
void AlberoN<T>::scriviNodo(nodo n, item el) {
    nodi[n].e = el;
}

template<class T>
typename AlberoN<T>::item AlberoN<T>::leggiNodo(nodo n) const {
    return (nodi[n].e);
}

template<class T>
int AlberoN<T>::getNumNodi() const {
    return this->numNodi;
}

//visita in preordine pi� aggiunta di tree all'albero.
template<class T>
void AlberoN<T>::visitaPreOrdine(nodo r, nodo n, AlberoN<T> &albero) {
    item e = albero.leggiNodo(n);
    nodo v;
    if (!albero.primoFiglio(n)) {
        v = albero.primoFiglio(n);
        insPrimo(r, albero.leggiNodo(v));
        r = primoFiglio(r);
        while (!albero.fineFratelli(v)) {
            visitaPreOrdine(r, v, albero);
            v = albero.succFratello(v);
            if (!albero.fineFratelli(v)) {
                insFratello(r, albero.leggiNodo(v));
            }
        }
    }
}

template<class T>
void AlberoN<T>::insPrimoSottoAlbero(nodo n, AlberoN<T> &albero) {
    if (this->numNodi + albero.getNumNodi() < MAXNODES) {
        insPrimo(n, albero.leggiNodo(albero.radice()));
//ins � la radice del sottoalbero da aggiungere (parametro: tree)
        nodo ins = primoFiglio(n);
        visitaPreOrdine(ins, albero.radice(), albero);
    }
}

template<class T>
void AlberoN<T>::insSottoAlbero(nodo n, AlberoN<T> &albero) {
    if (this->numNodi + albero.getNumNodi() < MAXNODES) {
        item treeRoot = albero.leggiNodo(albero.radice());
        insFratello(n, treeRoot);
        int pos = 0;

        for (int k = 0; k < MAXNODES && nodi[k].usati; k++) {
            if (nodi[k].e == treeRoot) {
                pos = k;
                break;
            }
        }
//pos rappresenta il nodo in cui � stata posta la radice del sottoalbero da aggiungere
        visitaPreOrdine(pos, albero.radice(), albero);
    }
}

#endif
