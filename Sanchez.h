#ifndef SANCHEZ_H
#define SANCHEZ_H

#include "Sanchez.h"
#include <iostream>
using std::ostream;

class Sanchez : public Moto
{
    friend ostream &operator<<(ostream &, const Sanchez &);
public:
    Sanchez();

    Sanchez(int, string);

    Sanchez(const Sanchez &);

    void setPlaca(const string &);

    string getPlaca() const;

    bool operator!() const;

    bool operator==(const int &anoInput) const;

    void operator=(const Sanchez &cop);

    bool operator!=(const Sanchez &) const;
    bool operator==(const Sanchez &) const;
    bool operator!() const;
    void operator=(const Sanchez &);

protected:
    bool flex;
    int ano;
    string placa;
};

#endif // SANCHEZ_H