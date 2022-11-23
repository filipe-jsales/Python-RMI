#include "Moto.h"
#include "Sanchez.h"
#include "Sanchez.h"
#include <iostream>
using namespace std;
#include <stdexcept>
#include <vector>
using std::vector;

Sanchez::Sanchez() : Moto()
{
    this->cilindradas = 300;
    this->setPlaca("sem-placa");
    this->setEconomico("true");
    this->ano = 1;
};
Sanchez::Sanchez(int ano, string placa) : Moto()
{
    this->ano = ano;
    this->placa = placa;
    this->setEconomico(true);
}

Sanchez::Sanchez(const Sanchez &veiculoOut)
    : Moto()
{
    this->ano = veiculoOut.ano;
    this->flex = veiculoOut.flex;
    this->placa = veiculoOut.placa;
}

void Sanchez::setPlaca(const string &placa)
{
    this->placa = placa;
}
string Sanchez::getPlaca() const
{
    return this->placa;
}

bool Sanchez::operator!() const
{
    if (ano <= 0)
    {
        cout << "Ano do veiculo nao informado" << '\n';
        return false;
    }
    return true;
}

bool Sanchez::operator==(const int &anoInput) const
{
    cout << "Operador ==" << '\n';
    if (ano == anoInput)
    {
        cout << "Sanchez equipado com freios ABS" << '\n';
        return true;
    }

    return false;
}

void Sanchez::operator=(const Sanchez &cop)
{
    cout << "Operador =" << '\n';
}

ostream &operator<<(ostream &out, const Sanchez &veiculo)
{
    out << "Ano do veículo:" << '\n';
    out << veiculo.ano;
    out << '\n';

    out << "Veículo é flex?" << '\n';
    out << veiculo.flex;
    out << '\n';
    
    out << "Placa:" << '\n';
    out << veiculo.placa;
    out << '\n';

    return out;
}

bool Sanchez::operator!=(const Sanchez &numAlunos) const
{
    cout << "Operador !=" << '\n';
    if (numAlunos.ano > 0)
        return true;
    return false;
}

bool Sanchez::operator==(const Sanchez &anoOut) const
{
    cout << "Operador ==" << '\n';
    if (anoOut == ano)
    {
        cout << "Ano do veículo está correto." << '\n';
        return true;
    }

    return false;
}
bool Sanchez::operator!() const
{
    if (ano > 0)
    {
        cout << "Ano válido " << '\n';
        return false;
    }
    return true;
}
