#include <iostream>
#include <fstream>

using namespace std;

#include "MatrixDeclaration.h"


// Constructor with no arguments
template<class T>
MATRIX<T>::MATRIX() {
    n = 0;
    m = 0;
    data = nullptr;
};

// Constructor with n and m arguments
template<class T>
MATRIX<T>::MATRIX(int n, int m) {
    this->n = n;
    this->m = m;
    data = new T *[n];
    for (int i = 0; i < n; i++)
        data[i] = new T[m];
}


// Copy constructor
template<class T>
MATRIX<T>::MATRIX(const MATRIX<T> &M) {
    n = M.n;
    m = M.m;
    data = new T *[n];
    for (int i = 0; i < n; i++)
        data[i] = new T[m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            data[i][j] = M.data[i][j];
}



//define "=" operator overload:
template<class T>
MATRIX<T> &MATRIX<T>::operator=(const MATRIX<T> &M) {
    if (this != &M) {
        if (n != M.n || m != M.m) {
            for (int i = 0; i < n; i++)
                delete[] data[i];
            delete[] data;
            n = M.n;
            m = M.m;
            data = new T *[n];
            for (int i = 0; i < n; i++)
                data[i] = new T[m];
        }
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                data[i][j] = M.data[i][j];
    }
    return *this;
}


template<class T>

MATRIX<T>::~MATRIX() {
    for (int i = 0; i < n; i++)
        delete[] data[i];
    delete[] data;
}

//define MATRIX Print function:
template<class T>
void MATRIX<T>::Print(const char *name) {
    cout << name << " = " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << data[i][j] << " ";
        cout << endl;
    }
}


template<class T>
T &MATRIX<T>::SetMij(int i, int j, int value) {
    if (i < 0 || i >= n || j < 0 || j >= m)
        throw "index out of range";
    data[i][j] = value;
    return data[i][j];
}

template<class T>
T &MATRIX<T>::GetMij(int i, int j) {
    if (i < 0 || i >= n || j < 0 || j >= m)
        throw "index out of range";
    return data[i][j];
}

template<class T>
int MATRIX<T>::GetN() const {
    return n;
}

template<class T>
int MATRIX<T>::GetM() const {
    return m;
};
