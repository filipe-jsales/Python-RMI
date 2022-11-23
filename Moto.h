#ifndef MOTO_H
#define MOTO_H

#include "Veiculo.h"
#include <iostream>
using std::ostream;

class Moto : public Veiculo
{
    friend ostream &operator<<(ostream &, const Moto &);

public:
    Moto();
    Moto(bool, bool, float);

    Moto(const Moto &);

    void darOGrau();

    void setModelo(const int &);

    int getModelo() const;

    void setFreioAbs(const bool);

    bool getFreioAbs();

    bool setEconomico(const bool);

    bool getEconomico();

    void cadastrarModelo(const string &);

    void printListaModelos() const;

    bool operator!=(const Moto &) const;
    bool operator==(const Moto &) const;
    bool operator!() const;
    void operator=(const Moto &);

protected:
    bool economico = true;
    int cilindradas;
    bool freioAbs;
    int rodas = 2;
    vector<string *> modelos;
};

#endif // MOTO_H
