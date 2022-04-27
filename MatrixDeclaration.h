#include <iostream>
#include <fstream>
using namespace std;


template <class T>
class MATRIX
{
    T **data;
    int n, m;
public:
    MATRIX();
    MATRIX(int n, int m);
    //copy constructor
    MATRIX(const MATRIX<T> &M);

    //= operator overload
    MATRIX<T> &operator=(const MATRIX<T> &M);

    //destructor
    ~MATRIX();
    void Print(const char *name);
    T &SetMij(int i, int j, int value);
    T &GetMij(int i, int j);
    int GetN() const;
    int GetM() const;
};



#ifndef KOSTIANLABA_MATRIXDECLARATION_H
#define KOSTIANLABA_MATRIXDECLARATION_H

#endif //KOSTIANLABA_MATRIXDECLARATION_H
