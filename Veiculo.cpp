#include "Veiculo.h"

#include <iostream>
using std::cout;
using std::string;

const string Veiculo::TIPOSDEVEICULOS[ QUANTIDADETIPOSDEVEICULOS ] = {"Carro", "Moto"};

void Veiculo::setTipoDeVeiculo(const string & tipoDeVeiculo)
{
    this->tipoDeVeiculo = tipoDeVeiculo;
}

string Veiculo::getTipoDeVeiculo() const 
{
    return this->tipoDeVeiculo;
}
