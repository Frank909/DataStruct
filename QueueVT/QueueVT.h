#ifndef QUEUEVT_H
#define QUEUEVT_H

template <class tipoelem>
class Coda {

public:
    Coda();
    Coda(int n);
    ~Coda();
    void creaCoda();
    bool codaVuota();
    tipoelem leggiCoda();
    void fuoriCoda();
    void inCoda(tipoelem a);
    friend std::ostream& operator<<(std::ostream& os, Coda<tipoelem>& c){
        os << "[";
        for(int i = 0; i < c.lung; i++)
            os << c.elementi[i] << " ";
        os << "]";
        return os << std::endl;
    }
private:
    tipoelem *elementi;
    int testa, lung, maxlung;
};

template <class T> Coda<T>::Coda() {
    maxlung = 100;
    creaCoda();
}

template <class T> Coda<T>::Coda(int n) {
    maxlung = n;
    creaCoda();
}

template <class T> Coda<T>::~Coda(){
    delete[] elementi;
}

template <class T> void Coda<T>::creaCoda(){
    elementi = new T[maxlung];
    testa = 0;
    lung = 0;
}

template <class T> bool Coda<T>::codaVuota(){
    return (lung == 0);
}

template <class T> T Coda<T>::leggiCoda(){
    if (!codaVuota())
        return (elementi[testa]);
}

template <class T> void Coda<T>::fuoriCoda(){
    if (!codaVuota()){
        testa = (testa + 1) % maxlung;
        lung--;
    }
}

template <class T> void Coda<T>::inCoda(T a){
    if (lung != maxlung){
        elementi[(testa+lung) % maxlung] = a;
        lung++;
    }
}

#endif