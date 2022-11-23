#include "Carro.h"
#include <iostream>
using namespace std;
#include <stdexcept>
#include <vector>
using std::vector;

Carro::Carro()
    : Veiculo(2)
{
    this->setTipoDeVeiculo("Carro");
    this->setRodas(2);
};
Carro::Carro(bool economico, bool freioAbs, float velocidadeMaxima)
    : Veiculo(2)
{
    this->economico = economico;
    this->freioAbs = freioAbs;
    this->velocidadeMaxima = velocidadeMaxima;
}

Carro::Carro(const Carro &veiculoOut)
    : Veiculo(2)
{
    this->tipoDeVeiculo = veiculoOut.tipoDeVeiculo;
    this->rodas = veiculoOut.rodas;
    this->velocidadeAtual = veiculoOut.velocidadeAtual;
    this->velocidadeMaxima = veiculoOut.velocidadeMaxima;
    this->economico = veiculoOut.economico;
    this->freioAbs = veiculoOut.freioAbs;
}


void Carro::setFreioAbs(const bool freioAbs)
{
    this->freioAbs = freioAbs;
}
bool Carro::getFreioAbs()
{
    return this->freioAbs;
}

void Carro::cadastrarModelo(const string &novoModelo)
{
    modelos.push_back(new string(novoModelo));
    cout << "novo modelo cadastrado: " << novoModelo << "\n";
}

void Carro::printListaModelos() const
{
    for (int i = 0; i < modelos.size(); i++)
        cout << modelos[i] << '\t' << *modelos[i] << endl;
}