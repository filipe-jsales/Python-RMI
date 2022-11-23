#ifndef BIZ_H
#define BIZ_H

#include "Moto.h"
#include <iostream>
using std::ostream;

class Biz : public Moto
{
    friend ostream &operator<<(ostream &, const Biz &);

public:
    Biz();

    Biz(int, string);

    Biz(const Biz &);

    void setPlaca(const string &);

    string getPlaca() const;

    bool operator!() const;

    bool operator==(const int &anoInput) const;

    void operator=(const Biz &cop);

    bool operator!=(const Biz &) const;
    bool operator==(const Biz &) const;
    bool operator!() const;
    void operator=(const Biz &);

protected:
    bool flex;
    int ano;
    string placa;
};

#endif // BIZ_H