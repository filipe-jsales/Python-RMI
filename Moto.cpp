#include "Moto.h"
#include <iostream>
using namespace std;
#include <stdexcept>
#include <vector>
using std::vector;

Moto::Moto()
    : Veiculo(2), cilindradas(120)
{
    this->setTipoDeVeiculo("moto");
    this->setRodas(2);
};
Moto::Moto(bool economico, bool freioAbs, float velocidadeMaxima)
    : Veiculo(2)
{
    this->economico = economico;
    this->freioAbs = freioAbs;
    this->velocidadeMaxima = velocidadeMaxima;
}

Moto::Moto(const Moto &veiculoOut)
    : Veiculo(2)
{
    this->tipoDeVeiculo = veiculoOut.tipoDeVeiculo;
    this->rodas = veiculoOut.rodas;
    this->velocidadeAtual = veiculoOut.velocidadeAtual;
    this->velocidadeMaxima = veiculoOut.velocidadeMaxima;
    this->economico = veiculoOut.economico;
    this->cilindradas = veiculoOut.cilindradas;
    this->freioAbs = veiculoOut.freioAbs;
}

void Moto::darOGrau()
{
    cout << "Dando o grau VRUUM "
         << "\n";
}

void Moto::setModelo(const int &cilindradas)
{
    this->cilindradas = cilindradas;
}
int Moto::getModelo() const
{
    return this->cilindradas;
}
void Moto::setFreioAbs(const bool freioAbs)
{
    this->freioAbs = freioAbs;
}
bool Moto::getFreioAbs()
{
    return this->freioAbs;
}
bool Moto::setEconomico(const bool economico)
{
    this->economico = economico;
}
bool Moto::getEconomico()
{
    return this->economico;
}

void Moto::cadastrarModelo(const string &novoModelo)
{
    modelos.push_back(new string(novoModelo));
    cout << "novo modelo cadastrado: " << novoModelo << "\n";
}

void Moto::printListaModelos() const
{
    for (int i = 0; i < modelos.size(); i++)
        cout << modelos[i] << '\t' << *modelos[i] << endl;
}

ostream &operator<<(ostream &out, const Moto &veiculo)
{
    out << "Cilindradas:" << '\n';
    out << veiculo.cilindradas;
    out << '\n';

    out << "Economico?" << '\n';
    out << veiculo.economico;
    out << '\n';

    out << "Freio abs?" << '\n';
    out << veiculo.freioAbs;
    out << '\n';

    return out;
}

bool Moto::operator!=(const Moto &rodas) const
{
    cout << "Operador !=" << '\n';
    if (rodas.economico) //moto economica
        return true;
    return false;
}

bool Moto::operator==(const Moto &rodasOut) const
{
    cout << "Operador ==" << '\n';
    if (rodasOut.freioAbs == true)
    {
        cout << "Veículo está equipado com freios abs" << '\n';
        return true;
    }

    return false;
}
bool Moto::operator!() const
{
    if (rodas == 0)
    {
        cout << "Veículo sem rodas " << '\n';
        return false;
    }
    return true;
}
