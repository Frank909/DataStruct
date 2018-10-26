#ifndef _MATRICE_H
#define _MATRICE_H

#include <iostream>
#include <sstream>
#include <time.h>

using namespace std;

class Matrix{

private:
    typedef double T;
    int rows;
    int cols;
    T** elementi;

    void initialize(int rows, int cols){
        this->rows = rows;
        this->cols = cols;
        elementi = new T*[this->rows];
        for(int i = 0; i < this->rows; i++)
            elementi[i] = new T[this->cols];
    }

    void dealloc(){
        for(int i = 0; i < getRows(); i++)
            delete[] elementi[i];
        delete[] elementi;
    }

public:

    Matrix(int rows, int cols){
        this->initialize(rows, cols);
        for(int i = 0; i < this->rows; i++)
            for(int j = 0; j < this->cols; j++)
                elementi[i][j] = 0;
    }

    Matrix(const Matrix& obj){
        this->rows = obj.rows;
        this->cols = obj.cols;
        this->initialize(rows, cols);
        for(int i = 0; i < this->rows; i++)
            for(int j = 0; j < this->cols; j++)
                elementi[i][j] = obj.elementi[i][j];
    }

    void randomInit(){
        rand_r(time(NULL));
        for(int i = 0; i < getRows(); i++)
            for(int j = 0; j < getCols(); j++)
                elementi[i][j] = rand() % 10;
    }

    ~Matrix(){
        dealloc();
    }

    int getRows(){
        return this->rows;
    }

    int getCols(){
        return this->cols;
    }

    T readMatrix(int r, int c){
        return elementi[r][c];
    }

    void writeMatrix(int r, int c, T e) {
        elementi[r][c] = e;
    }

    void prodottoScalare(double scalare){
        for(int i = 0; i < getRows(); i++)
            for(int j = 0; j < getCols(); j++)
                elementi[i][j] = scalare * elementi[i][j];
    }

    void trasposta(){
        Matrix temp(getRows(), getCols());
        for(int i = 0; i < getRows(); i++) {
            for (int j = 0; j < getCols(); j++) {
                temp.writeMatrix(i, j, elementi[i][j]);
            }
        }

        this->dealloc();

        initialize(temp.getCols(), temp.getRows());

        for(int i = 0; i < getRows(); i++)
            for(int j = 0; j < getCols(); j++)
                elementi[i][j] = temp.readMatrix(j, i);
    }


    void prodotto(Matrix& M) {
        Matrix result(getRows(), M.getCols());
        if(this->getCols() != M.getRows())
            throw runtime_error("Impossibile effettuare il prodotto");
        else{
            for(int i = 0; i < result.getRows(); i++){
                for(int j = 0; j < result.getCols(); j++){
                    for(int k = 0; k < getCols(); k++){
                        result.elementi[i][j] += elementi[i][k] * M.readMatrix(k, j);
                    }
                }
            }
        }

        this->dealloc();

        initialize(result.getRows(), result.getCols());

        for(int i = 0; i < getRows(); i++)
            for(int j = 0; j < getCols(); j++)
                elementi[i][j] = result.readMatrix(i, j);

    }

    Matrix operator +(Matrix& m){
        Matrix result(getRows(), getCols());
        if((getRows() == m.getRows()) && (getCols() == m.getCols())) {
            for (int i = 0; i < getRows(); i++)
                for (int j = 0; j < getCols(); j++)
                    result.writeMatrix(i, j, elementi[i][j] + m.readMatrix(i, j));
        }else
            throw runtime_error("Impossibile effettuare la somma");

        return result;
    }

    Matrix &operator=(const Matrix &m){
        // evita gli auto assegnamenti
        if (this == &m) return *this;
        else {
            if (cols != m.cols || rows != m.rows){
                this->~Matrix();
                this->initialize(m.rows, m.cols);
            }
            for (int i = 0; i < rows; i++)
                for(int j = 0; j < cols; j++)
                    elementi[i][j] = m.elementi[i][j];
        }
        return *this;
    }

    friend ostream& operator<<(ostream& out, Matrix& m){
        out.flush();
        for(int i = 0; i < m.getRows(); i++){
            for(int j = 0; j < m.getCols(); j++)
                out << m.readMatrix(i, j) << " ";
            out << endl;
        }
        return out;
    }
};

#endif //MATRICE_H