#ifndef CARRO_H
#define CARRO_H

#include <vector>
using std::vector;
#include "Veiculo.h"
#include <iostream>
using std::ostream;

class Carro : public Veiculo
{
    friend ostream &operator<<(ostream &, const Carro &);
public:
    Carro();
    Carro(bool, bool, float);

    Carro(const Carro &);


    void setModelo(const int &);

    int getModelo() const;

    void setFreioAbs(const bool);

    bool getFreioAbs();

    void cadastrarModelo(const string &);

    void printListaModelos() const;

    bool operator!=(const Carro &) const;
    bool operator==(const Carro &) const;
    bool operator!() const;
    void operator=(const Carro &);

protected:
    bool economico = false;
    bool freioAbs;
    bool automatico;
    int rodas = 4;
    vector<string *> modelos;
};

#endif // CARRO_H
