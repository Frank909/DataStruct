#ifndef _ALBEROBINARIO_H_
#define _ALBEROBINARIO_H_
#define MAX 1024
#define DMAX 2048

#include <iostream>
#include "Cella.h"

using namespace std;

template<class T>
class Alberobinario {
public:
    typedef T tipoelem;
    typedef Cella<T> nodo;

    typedef struct {
        bool esiste;
        nodo elemento;
    } componente;

    Alberobinario();

    Alberobinario(int);

    ~Alberobinario();

    //metodi
    void creaAlberoBin();

    bool binAlberoVuoto();

    componente binRadice();

    componente binPadre(nodo);

    componente figlioSinistro(nodo);

    componente figlioDestro(nodo);

    bool sinistroVuoto(nodo);

    bool destroVuoto(nodo);

    void cancSottoBinAlbero(nodo);

    tipoelem leggiNodo(nodo);

    void scriviNodo(tipoelem, nodo);

    void insBinRadice(tipoelem);

    void insFiglioSinistro(nodo, tipoelem);

    void insFiglioDestro(nodo, tipoelem);

private:

    componente vettore_albero[MAX];
};

template<class T>
Alberobinario::Alberobinario() {
    creaAlberoBin();
}

template<class T>
Alberobinario::Alberobinario(int n) {
    int i = 0;

    for (i = 0; i < n; i++) {
        vettore_albero[i].elemento.setGenitore(-1);
        vettore_albero[i].elemento.setSinistro(-1);
        vettore_albero[i].elemento.setDestro(-1);
        vettore_albero[i].elemento.setIstante(-1);
        vettore_albero[i].esiste = false;
    }
}

template<class T>
Alberobinario::~Alberobinario() {
}

template<class T>
void Alberobinario::creaAlberoBin() {
    int i = 0;

    for (i = 0; i < MAX; i++) {
        vettore_albero[i].elemento.setGenitore(-1);
        vettore_albero[i].elemento.setSinistro(-1);
        vettore_albero[i].elemento.setDestro(-1);
        vettore_albero[i].elemento.setIstante(-1);
        vettore_albero[i].esiste = false;
    }
}

template<class T>
bool Alberobinario::binAlberoVuoto() {
    return !vettore_albero[0].esiste;
}

template<class T>
typename Alberobinario::componente Alberobinario::binRadice() {
    return vettore_albero[0];
}

template<class T>
typename Alberobinario::componente Alberobinario::binPadre(nodo n) {
    return vettore_albero[n.getGenitore()];
}

template<class T>
typename Alberobinario::componente Alberobinario::figlioSinistro(nodo n) {
    return vettore_albero[n.getSinistro()];
}

template<class T>
typename Alberobinario::componente Alberobinario::figlioDestro(nodo n) {
    return vettore_albero[n.getDestro()];
}

template<class T>
bool Alberobinario::sinistroVuoto(nodo n) {
    return !vettore_albero[n.getSinistro].esiste;
}

template<class T>
bool Alberobinario::destroVuoto(nodo n) {
    return !vettore_albero[n.getDestro()].esiste;
}

template<class T>
typename Alberobinario::tipoelem Alberobinario::leggiNodo(nodo n) {
    return vettore_albero[n.getIstante()].getElemento;
}

template<class T>
void Alberobinario::scriviNodo(tipoelem e, nodo n) {
    vettore_albero[n.getIstante()].setElemento(e);
}

template<class T>
void Alberobinario::insBinRadice(tipoelem e) {
    if (binAlberoVuoto()) {
        vettore_albero[1].elemento.setIstante(1);
        vettore_albero[1].esiste = true;
        vettore_albero[1].elemento.setElemento(e);
    } else
        cout << "l'albero non e' vuoto!";
}

template<class T>
void Alberobinario::insFiglioSinistro(nodo n, tipoelem e) {
    if (!binAlberoVuoto() && (sinistroVuoto(n))) {
        vettore_albero[i].elemento.setElemento(e);
        vettore_albero[i].elemento.setSinistro(-1);
        vettore_albero[i].elemento.setDestro(-1);
        vettore_albero[i].elemento.setGenitore(n.getIstante());
        vettore_albero[i].elemento.setIstante(2 * n.getIstante());
        vettore_albero[i].esiste = true;
    } else {
        cout << "Albero vuoto oppure nodo sinistro gia' occupato!";
    }
}

template<class T>
void Alberobinario::insFiglioDestro(nodo n, tipoelem e) {
    if (!binAlberoVuoto() && (destroVuoto(n))) {
        vettore_albero[i].elemento.setElemento(e);
        vettore_albero[i].elemento.setSinistro(-1);
        vettore_albero[i].elemento.setDestro(-1);
        vettore_albero[i].elemento.setGenitore(n.getIstante());
        vettore_albero[i].elemento.setIstante((2 * n.getIstante()) + 1);
        vettore_albero[i].esiste = true;
    } else {
        cout << "Albero vuoto oppure nodo destro gia' occupato!";
    }
}

template<class T>
void Alberobinario::cancSottoBinAlbero(nodo n) {
    if (binAlberoVuoto())
        return;

    // Cancella figli
    if (!sinistroVuoto(n))
        cancSottoBinAlbero(figlioSinistro(n));
    if (!destroVuoto(n))
        cancSottoBinAlbero(figlioDestro(n));

    // Cancella nodo a partire dal padre
    if (n == binRadice()) {
        delete (n);
    } else {
        componente temp = binPadre(n);
        if (temp.elemento.getSinistro() == n)
            temp.elemento.setSinistro(-1);
        else
            temp.elemento.getDestro(-1);
        delete (n);
    }
}

#endif
