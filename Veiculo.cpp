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

void Veiculo::setVelocidadeAtual( float velocidadeAtual )
{
    //checa se a velocidade atual é maior que a máxima permitida
    if ( velocidadeAtual > this->velocidadeMaxima)
        this->velocidadeAtual = velocidadeMaxima;

    this->velocidadeAtual = velocidadeAtual;
}

float Veiculo::getVelocidadeAtual( )
{
    return this->velocidadeAtual; 
}
