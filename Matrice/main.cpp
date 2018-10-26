#include <iostream>
#include "Matrix.cpp"

int main(){

    Matrix matrix(2, 4), matrix1(4, 2);
    matrix.randomInit();
    matrix1.randomInit();

    cout << "Matrice originale 1:" << endl;
    cout << matrix << endl;

    cout << "Matrice 2: " << endl;
    cout << matrix1 << endl;

    int prod = 10;
    matrix.prodottoScalare(prod);
    cout << "Prodotto scalare per : " << prod << endl;
    cout << matrix << endl;

    cout << "Prodotto" << endl;

    try {
        matrix.prodotto(matrix1);
        cout << matrix << endl;
    }catch (runtime_error& error){
        cout << error.what() << endl;
    }

    cout << "Trasposta" << endl;
    matrix1.trasposta();
    cout << matrix1 << endl;

    matrix = matrix1;
    cout << "Assegnazione matrix = matrix1" << endl;
    cout << matrix;

    return EXIT_SUCCESS;
}