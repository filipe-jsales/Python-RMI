#include "Moto.h"
#include "Biz.h"
#include "Veiculo.h"
#include <iostream>
using namespace std;
#include <stdexcept>
#include <vector>
using std::vector;

Biz::Biz() : Moto()
{
    this->cilindradas = 120;
    this->setPlaca("sem-placa");
    this->setEconomico("true");
    this->ano = 1;
};
Biz::Biz(int ano, string placa) : Moto()
{
    this->ano = ano;
    this->placa = placa;
    this->setEconomico(true);
}

Biz::Biz(const Biz &veiculoOut)
    : Moto()
{
    this->tipoDeVeiculo = veiculoOut.tipoDeVeiculo;
    this->rodas = veiculoOut.rodas;
    this->velocidadeAtual = veiculoOut.velocidadeAtual;
    this->velocidadeMaxima = veiculoOut.velocidadeMaxima;
    this->economico = veiculoOut.economico;
    this->cilindradas = veiculoOut.cilindradas;
    this->freioAbs = veiculoOut.freioAbs;
    this->ano = veiculoOut.ano;
    this->placa = veiculoOut.placa;
}

void Biz::setPlaca(const string &placa)
{
    this->placa = placa;
}
string Biz::getPlaca() const
{
    return this->placa;
}



ostream &operator<<(ostream &out, const Biz &veiculo)
{
    out << "Ano:" << '\n';
    out << veiculo.ano;
    out << '\n';

    out << "Placa:" << '\n';
    out << veiculo.placa;
    out << '\n';

    out << "Economico?" << '\n';
    out << veiculo.economico;
    out << '\n';

    return out;
}

bool Biz::operator!() const
{
    if (ano <= 0)
    {
        cout << "Ano do veiculo nao informado" << '\n';
        return false;
    }
    return true;
}

bool Biz::operator==(const int &anoInput) const
{
    cout << "Operador ==" << '\n';
    if (ano == anoInput)
    {
        cout << "Veiculo equipado com freios ABS" << '\n';
        return true;
    }

    return false;
}

void Biz::operator=(const Biz &cop)
{
    cout << "Operador =" << '\n';
}
